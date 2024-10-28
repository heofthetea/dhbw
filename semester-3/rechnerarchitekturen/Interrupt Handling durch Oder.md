[[Interrupt Controller]]

![[Pasted image 20241028104023.png]]

> [!error] Ist ein normaler [[BUS-System]] - mit üblichen Problemen durch [[Kollision (Zugriffsverfahren)|Kollisionen]]. KOLLISION DETECTION GIBT ES NICHT.


## Ablauf
1. Gerät: [[Interrupt]] Anfrage durch [[INTR]]
2. [[CPU]]: Antwort über [[INTA]]
3. nur anfragendes Gerät reagiert
	1. legt Bitmuster auf Bus