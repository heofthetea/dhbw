> Request-to-Send/Clear-to-send
> Lösung für [[Hidden Station Problem]]

[[Point Coordination Function]]

- Will eine [[Station]] Daten senden, wird ein Control Frame (Request to Send) an den [[Access Point]].
	- **Nur** wenn ein Clear-To-Send [[Control Frame|Frame]] zurück kommt, darf [[Station]] schicken

![[Pasted image 20250403095618.png]]

> [!hint] Alle die das RTS mitbekommen, können ihren [[Network Allocation Vector]] schon mal setzen.
> Alle anderen können das erst, wenn der CTS [[Broadcast|broadcasted]] wurde.

## [[Frame]]-Aufbau
![[Pasted image 20250403100801.png]]

![[Pasted image 20250403100809.png]]