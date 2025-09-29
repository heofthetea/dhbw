> [!info] Only needs [[SSH]] working on the target machine.

- Ansible is agent-less - does not need any client on [[Ansible Managed Node|Managed Nodes]].
- Translates the [[Ansible Playbook|Playbook]] into [[Python]] scripts that are copied to and executed on the managed [[Host]] 

> [!warning] Ansible is very slow to copy files (because ssh copy).

![[Pasted image 20250331160828.png]]

- [[Ansible Control Node]]
- [[Ansible Managed Node]]