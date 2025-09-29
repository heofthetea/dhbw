
# Azure
## app.tf
```bash
terraform {
  required_providers {
    azurerm = {
      source  = "hashicorp/azurerm"
      version = "~> 3.0.2"
    }
  }

  required_version = ">= 1.1.0"
}
provider "azurerm" {
  features {}
}
data "azurerm_resource_group" "cloud2025" {
  name =  "${var.azure-preset.resource-group}"
}
data "azurerm_ssh_public_key" "cloud2025keys" {
  name                = "${var.azure-preset.keys}"
  resource_group_name = data.azurerm_resource_group.cloud2025.name
}
resource "azurerm_virtual_network" "network" {
  name                = "dhbwvpc"
  address_space       = ["10.0.0.0/16"]
  location            = data.azurerm_resource_group.cloud2025.location
  resource_group_name = data.azurerm_resource_group.cloud2025.name
}
resource "azurerm_subnet" "dhbwsubnet" {
  name                 = "dhbwsubnet"
  resource_group_name  = data.azurerm_resource_group.cloud2025.name
  virtual_network_name = azurerm_virtual_network.network.name
  address_prefixes     = ["10.0.2.0/24"]
}

resource "azurerm_network_interface" "dhbwIPs" {
  name                = "dhbwnetworkif"
  location            = data.azurerm_resource_group.cloud2025.location
  resource_group_name = data.azurerm_resource_group.cloud2025.name

  ip_configuration {
    name                          = "internal"
    subnet_id                     = azurerm_subnet.dhbwsubnet.id
    private_ip_address_allocation = "Dynamic"
    public_ip_address_id =  azurerm_public_ip.dhbwpublicIP.id
  }
}
resource "azurerm_public_ip" "dhbwpublicIP" {
  name                = "dhbwpublicIP"
  resource_group_name = data.azurerm_resource_group.cloud2025.name
  location            = data.azurerm_resource_group.cloud2025.location
  allocation_method   = "Dynamic"

  tags = {
    environment = "Nodes App"
  }
}
resource "azurerm_network_security_group" "dhbwport80" {
  name                = "dhbwport80"
  location            = data.azurerm_resource_group.cloud2025.location
  resource_group_name = data.azurerm_resource_group.cloud2025.name

  security_rule {
    name                       = "Open_Port_22"
    priority                   = 100
    direction                  = "Inbound"
    access                     = "Allow"
    protocol                   = "Tcp"
    source_port_range          = "*"
    destination_port_range     = "22"
    source_address_prefix      = "*"
    destination_address_prefix = "*"
  }
  security_rule {
    name                       = "Open_Port_80"
    priority                   = 101
    direction                  = "Inbound"
    access                     = "Allow"
    protocol                   = "Tcp"
    source_port_range          = "*"
    destination_port_range     = "80"
    source_address_prefix      = "*"
    destination_address_prefix = "*"
  }

  tags = {
    environment = "mach endlich die 80iger und 22iger  Tür auf"
  }
}
resource "azurerm_subnet_network_security_group_association" "openPort80Reference" {
  subnet_id                 = azurerm_subnet.dhbwsubnet.id
  network_security_group_id = azurerm_network_security_group.dhbwport80.id
}
resource "azurerm_linux_virtual_machine" "dhbwdemo" {
  name                = "dhbwvirtualmachine"
  resource_group_name = data.azurerm_resource_group.cloud2025.name
  location            = data.azurerm_resource_group.cloud2025.location
  size                = "Standard_F2"
  admin_username      = "${var.azure-preset.user}"
  network_interface_ids = [
    azurerm_network_interface.dhbwIPs.id
  ]

  admin_ssh_key {
    username   = "${var.azure-preset.user}"
    public_key = data.azurerm_ssh_public_key.cloud2025keys.public_key
  }
  os_disk {
    caching              = "ReadWrite"
    storage_account_type = "Standard_LRS"
  }
  source_image_reference {
    publisher = "Canonical"
    offer     = "0001-com-ubuntu-server-jammy"
    sku       = "22_04-lts"
    version   = "latest"
  }
}
# ---------------- copy Nodes App (tinyapp) ------------------------------------
# It is actually faster to use Terraform for copying file than using Ansible
# ------------------------------------------------------------------------------
resource "null_resource" "copyApp" {
connection {
  type = "ssh"
  host = azurerm_linux_virtual_machine.dhbwdemo.public_ip_address
  user = "${var.azure-preset.user}"
  port = 22
  private_key = file("${var.azure-preset.keyfile}")
 }
 provisioner "remote-exec" {
      inline = [
     "cd work",
     "rm -r ${var.copyapp.destination}",
     "mkdir ${var.copyapp.destination-root}",
     "mkdir ${var.copyapp.destination}"
   ]
  }
  provisioner "file" {
   source = "${var.copyapp.source}"
   destination = "${var.copyapp.destination}"
 }
}
# ------------------------------------------------------------------------------
# Install Node.js, PM2 and activate the the WebServer using Ansible Playbook
# ------------------------------------------------------------------------------
resource "null_resource" "InstallNode" {
  triggers = { playhash = "${sha1(file("${path.cwd}/playnodes.yml"))}" }
  depends_on = [null_resource.copyApp]
  provisioner "local-exec"  {
  command = "ANSIBLE_HOST_KEY_CHECKING=False ansible-playbook -u juergen -i '${azurerm_linux_virtual_machine.dhbwdemo.public_ip_address}, ' --private-key '${var.azure-preset.keyfile}' ./playnodes.yml"
}
}
```

## variables.tf
```bash
  variable "azure-preset" {
    type = map(string)
    default = {
        resource-group = "Cloud2025"
        keys = "cloud2025keys"
        keyfile = "/Users/juergenschneider/Documents/webpages/DHBW/Cloud2025/InternalStuff/Azure/cloud2025keys.pem"
        user = "juergen"
      }
}
  variable "copyapp" {
        type = map(string)
        description = "all variables for copying the Apps"
          default = {
            "destination" = "/home/juergen/work/tinyapp"
            "destination-root" = "/home/juergen/work"
            "source" = "/Users/juergenschneider/Documents/webpages/DHBW/Cloud2025/Übungen/tinyNodejsApp/"
        }
  }
```