> [[CSMA]] / Collision Avoidance


![[Pasted image 20241009095456.png]]

- Wenn Wartezeit vorbei ist, wird _nochmal_ geschaut, ob Kanal frei ist -> <span style="color:rgb(245, 154, 35)">Backoff-Timer</span>
- Wenn mein Backoff-Timer zu langsam: Es wird kein _neuer_ bestimmt, sondern der Timer wird angehalten -> somit wird timer immer kleiner, bis er eventually mal dran kommt

### Begrifflichkeiten
- **IFS** - Inter-Frame-Space (hier wird gewartet)
	- jeder wählt eine natürliche Zahl aus einem Intervall - wird mit $20\ \mu sec$ multipliziert
- **CW**: Contention Window (hier gleichen alle gleichzeitig auf die Leutung zu)
- $C$ erkennt nach Backoff Zeit, dass $B$ schneller war --> wartet bis zum nächstem CW
	- Rest-Backoffzeit seit letztem $CW$ wird übernommen
- [[Network Allocation Vector]]

## Grafik 
![[Pasted image 20250403093223.png]]
> [!hint] [[ACK|Quittung]] darf noch vom Empfänger versendet werden, bevor das nächste DIFS startet.

> [!info] Feld "more frag" in [[ACK|Quittung]] indicated, ob [[Fragmentierung|fragmentiert]] wurde, also länger gewartet werden muss.

## [[semester-3/netztechnik/Kollision|Kollisions]]-Behandlung

> [!hint] [[semester-3/netztechnik/Kollision|Kollision]] kann trotzdem auftreten, wenn sich zwei Geräte dieselbe Backoff-Zeit auswählen.

> [!warning] Kann nur mithilfe von [[ACK|Quittung]]  in [[Layer 2]] erkannt werden (weil halt keine kommt) => Wenn es sich um ein Control-Frame handelt, ist der halt futsch.

![[Pasted image 20250403093833.png]]