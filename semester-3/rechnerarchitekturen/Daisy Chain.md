[[Interruptlogik direkt an CPU]] [[Linien-Topolgie]]

## Ablauf
1. Gerät: gibt [[INTR]] Anfrage weiter (wenn es nicht selbst angefragt hat)
2. [[CPU]]: antwortet über [[INTA]]
3. Gerät: gibt [[INTA]]-Antwort weiter (wenn es nicht selbst angefragt hat)
4. anfragendes Gerät reagiert --> Bitmuster auf [[BUS-System|Bus]]

> [!hint] Kollisionen kann es nicht geben, weil alles in Reihe geschalten ist

- built-in [[Priorität Interrupt|Priorität]]: je näher an [[CPU]], desto höher

> [!error] Benötigt zusätzliche Hardware im Gerät; ist Abhängig von [[CPU]] --> hoher Aufwand


![[Pasted image 20241028104507.png]]