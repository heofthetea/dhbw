[[Metasploit Framework]]

- Basically pre-written Scripts
	- you can probably write your own modules I'd suppose
## Types of Modules

| **Type**                  | **Description**                                                                                 |
| ------------------------- | ----------------------------------------------------------------------------------------------- |
| **Auxiliary**             | Scanning, fuzzing, sniffing, and admin capabilities. Offer extra assistance and functionality.  |
| **Encoders**              | Ensure that payloads are intact to their destination.                                           |
| [[MSF Exploit\|Exploits]] | Defined as modules that exploit a vulnerability that will allow for the payload delivery.       |
| **NOP**                   | (No Operation code) Keep the payload sizes consistent across exploit attempts.                  |
| [[MSF Payload\|Payloads]] | Code runs remotely and calls back to the attacker machine to establish a connection (or shell). |
| **Plugins**               | Additional scripts can be integrated within an assessment with msfconsole and coexist.          |
| **Post**                  | Wide array of modules to gather information, pivot deeper, etc.                                 |

> [!hint] When a specific type of module (e.g. an [[MSF Exploit|Exploit]]) is selected, additional commands become available (see them through `help`).
### Naming
- The module naming convention seems to follow a pattern similar to [[MQTT Topics]]
	- comes from the filesystem

```
type/subcategory/...
```

## Working with Modules
### Searching
- find a module
```
msf> search <keyword>
```
### Selecting
- Select a module to "operate" in
	- -> you can then like perform operations and stuff

```
msf> use <module_name>
```

> [!hint] to exit from a module, use `back`

