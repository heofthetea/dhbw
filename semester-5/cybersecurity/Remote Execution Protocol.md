---
aliases:
  - rexec
---
> Remote Process Execution as per [[IANA Well-known Ports]]

- [[TCP]] [[IANA Well-known Ports|well-known port]] 512
- [[Authentication]] is performed through [[Basic Auth]]

> The exec protocol was first added to 4.2BSD and was later determined to be insecure. The main security issue for the protocol is that it does not encrypt data, which allows usernames and passwords to be viewed with a packet sniffer. ~ [wireshark](https://wiki.wireshark.org/Exec)

uhm yes should NOT be open on a network
but has no reasonable path to exploitation for metasploitable 2



## Read
-  wiki.wireshark.org/Exec