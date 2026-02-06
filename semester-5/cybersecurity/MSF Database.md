> Basically stores both configuration and results

- read: https://www.offsec.com/metasploit-unleashed/using-databases
## Workspaces
- neat for organizing "sessions"

```
msf> workspace -a my_workspace
	(workspace got created, output shows workspaces)
msf> workspace -d my_workspace 
	(deletes worspace)
```


## Hosts
- manage discovererd hosts (during [[MSF Reconnaissance with nmap]])
- i.e. [[IP]] addresses, [[Betriebssystem|OS]] information

## Services
- manage discovered services (during [[MSF Reconnaissance with nmap]])
	- i.e. Applications that have been discovered to listen on [[Port]]s xy
## Credentials
- automatically fills as credentials have been extracted
	- e.g. by bruteforce
## Loot
- Manage exfiltrated data
	- e.g. [[Hashdump]]s
