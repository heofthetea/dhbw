![[Pasted image 20241009095456.png]]

- Wenn Wartezeit vorbei ist, wird _nochmal_ geschaut, ob Kanal frei ist



## Grafik
wenn $A$ fertig ist mit senden, wird eine **Backoff**-Zeit abgearbeitet
- **CW**: Contention Window (hier gleichen alle gleichzeitig auf die Leutung zu)
- $C$ erkennt nach Backoff Zeit, dass $B$ schneller war --> wartet bis zum nächstem CW
	- Rest-Backoffzeit seit letztem $CW$ wird übernommen

![[Pasted image 20241009102830.png]]

- ACK: Acknowledge

> [!hint] Kann Trotzdem kollidieren, wenn Backoff Zeit von $B$ genau so lang ist wie Restzeiyt von $C$
> Wird dann von [[Layer 2]] erkannt, Senden muss wiederholt werden