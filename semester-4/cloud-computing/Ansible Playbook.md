[[YAML]] configuration, defining 'plays' (think: gitlab ci jobs)

- each play is defined by a name
- `hosts`: Each [[Host]] is tagged -> this playbook is executed on all [[Server|servers]] tagged here
## Example

```yaml
#################################################
# DO Community Playbooks: Node.js
#################################################
---
- hosts: all
  become: true
  gather_facts: no
  tasks:
    - name: Wait 600 seconds for target connection to become reachable/usable
      ansible.builtin.wait_for_connection:
  tasks:
    - name: Install GPG
      tags: nodejs, install, setup
      apt:
        name: gnupg
        update_cache: yes
        state: present

    - name: Install the gpg key for nodejs LTS
      apt_key:
        url: "https://deb.nodesource.com/gpgkey/nodesource.gpg.key"
        state: present

    - name: Install the nodejs LTS repos
      apt_repository:
        repo: "deb https://deb.nodesource.com/node_18.x focal main"
        state: present
        update_cache: yes

    - name: Install NodeJS
      tags: nodesjs, install
      apt:
        name: nodejs
        state: latest
    
    - name: Install PM2
      ansible.builtin.command: npm install -g pm2

    - name: Install WebServer
      ansible.builtin.command: npm install
      args:
        chdir: /home/juergen/work/tinyapp/

    - name: Run WebServer
      ansible.builtin.command: pm2 start myWebServer.js -f
      args:
        chdir: /home/juergen/work/tinyapp/
```