> [[Kernel]] Control Groups

- limits access to [[Resource|Resources]] for [[Prozess|processes]]
- Allows [[Docker]] to share hardware between [[Docker Container|containers]]
- allows allocation of [[Resource|Resources]] to each [[Docker Container|Container]] within the [[Linux]] [[Kernel]]
- [[Docker]] uses the following cgroups:
	- [[Memory]]
	- [[CPU]] - manage [[CPU|Processor]]
	- BlkIO - manage Block-[[IO]]
	- [[Device]]: read/write access for [[Device|Devices]].
