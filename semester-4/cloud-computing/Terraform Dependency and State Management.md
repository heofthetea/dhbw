> Express [[Resource Dependencies|Dependencies]]


- **implicit**: ???
- **explicit**: key-value pair: `depends_on = [resource_1, resource_2]`
- [[Trigger]] - logs any changes
	- when `terraform apply` is run, [[Terraform]] uses those logs to perform changes

![[Pasted image 20250324175847.png]]