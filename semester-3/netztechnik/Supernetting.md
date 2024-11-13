> Verkleinern der [[Subnet Mask]]

- Ausgang: $255.255.255.0$
	- Man schiebt Eins/Null Grenze nach _links_: $255.255.63.0$

> [!info] Anwendung: Hält [[Routing Tabelle|Routing Tabellen]] kleiner, da mehrere Einträge zusammen gefasst werden können.


## Beispiel
![[Pasted image 20241113093456.png]]

- [[Router]] $A$ macht Supernetting => Fasst alle $3$ internen Netze zusammen, indem er 
- Damit werden $.0.0$, $.1.0$, ... zu **Host**-Adressen

![[Pasted image 20241113094040.png]]

> [!hint] Das eine Netzwerk, das in der Außenstelle steckt, muss explizit mit einer $/24$ [[Subnet Mask]] in der [[Routing Tabelle]] stehen.

- Ein [[Paket]], dass an $159.10.3.0$ geschickt wird, passt aber in **beide** Einträge der [[Routing Tabelle]]
=> **Lösung**: Tabellen sind sortiert, sodass immer die **größte** [[Subnet Mask]] zuerst gematcht wird


