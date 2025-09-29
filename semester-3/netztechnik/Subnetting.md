> [[Subnet Mask]], letztes [[Byte]] nicht ganz aufgefüllt wird

- ist "Classless" denken (weil man nicht mehr an [[Netzwerkklassen]] gebunden ist)
## Tabelle
> [!hint] Letzter Tabelleneintrag führt natürlich zu einfach einer niedrigeren [[Netzwerkklassen|Netzwerkklasse]].

- $n$-Bit Subnetting sagt, dass $n$ Bit des Bytes als Einsen in der [[Subnet Mask]] gesetzt werden
	- 1-Bit Subnetting lässt _keine_ <span style="color:rgb(245, 154, 35)">Subnetze</span> zu (weil all 0's and all 1's von [[RFC]] verboten sind (reserved für Netzwerk-Adresse & Multicast))
	- 7-Bit Subnetting lässt _keine_ <span style="color:rgb(245, 154, 35)">Hosts</span> zu.

> [!hint] Die größtmögliche (nutzbare) [[Subnet Mask]] ist $/30$. Damit kann man genau zwei Hosts miteinander verbinden.


![[Pasted image 20241106113834.png]]