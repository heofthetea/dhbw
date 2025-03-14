[[Minimaler Spannbaum]]

[[BPDU]]

- Ziel: [[Mesh Topologie]] so hinzubiegen, dass es nur _einen_ Weg von jedem [[Knoten]] $A$ nach $B$ gibt
	- Transformiere in logische [[Baum-Topologie]]
- Traffic geht **immer** über Root-Switch

> [!warning] Vorraussetzung: [[Switch]] muss **managebar** sein

### Bridge ID
Besteht aus zwei Teilen:
1. [[MAC Adresse]]
2. Priorität (von Admin veränderbar): 16 [[Bit]]
	1. Default: $2^{15} = 32768 = 8000_{16}$ --> ist genau die Mitte, yay
	2. Prio nach unten setzen macht diesen [[Switch]] zur [[Wurzel]]

> [!hint] Es wird zuerst Prio ausgewertet, _danach_ bei Gleichheit die MAC Adresse.

## Algorithmus

> [!hint] Die [[Paket|Pakete]], die von [[Switch|Switches]] gesendet werden, um den [[Spanning Tree]] zu bauen und instand zu halten.

1. Finde [[Wurzel]] ([[Switch]] mit kleinster [[MAC Adresse]])
	1. jeder [[Switch]] gibt konstant von sich, was er weiß (am anfang seine [[#Bridge ID]]) --> [[BPDU]]
2. Pfadkosten bewerten (je schneller die [[Leitung]], desto niedriger die Kosten)
3. Jeder [[Switch]] ermittelt den kleinsten Weg zum Root-Switch
	1. bei zwei gleich starken Wegen: einfach kleinere [[Port]]-Nummer wählen lol
	2. Der entsprechende [[Port]] wird <span style="color:rgb(245, 154, 35)">Root Port</span> $RP$
4. Alle Ports, die von einem $RP$ angesprochen werden, werden zu <span style="color:rgb(245, 154, 35)">Designated Port</span> $DP$
5. Alle anderen Ports werden zu <span style="color:rgb(245, 154, 35)">Blocking Ports</span>
	1. Der mit der größeren [[MAC Adresse]] setzt seinen Port auf Block
	2. Blocking Ports lassen nur BPDUs durch

> [!hint] Wenn Root Switch ausfällt, wird das anhand fehlender BPDUs erkannt, und ein neuer [[Spanning Tree]] gebaut


### Pfadkosten
![[Pasted image 20241023112834.png]]

