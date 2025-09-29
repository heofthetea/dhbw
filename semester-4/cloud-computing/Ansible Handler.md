> Only run when notified by an earlier [[Ansible]] task



```yaml
tasks:
	name: test
	...
	notify:
		- restart
handlers:
	name: restart
	...
```