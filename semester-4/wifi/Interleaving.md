> Baut [[WLAN Frame|Frames]] neu auf


- nachdem [[Forward Error Correction]] gebaut wurde, werden die Frames interleaved
- Wenn jetzt $4$ [[Bit]] am Stück gestört werden, gehören diese [[Bit|Bits]] zu unterschiedlichen Control Groups -> <span style="color:rgb(245, 154, 35)">sind reparierbar</span>!!!

> [!hint] In Praxis mehrstufig: Block umsortiert, dann die Blöcke untereinander nochmal umsortiert.
## Auf Disk
> [!hint] Kommt eigentlich aus der physik der Festplatte.

- Disk dreht sich zu schnell, um alle Sektoren lesen
- -> Teile der Disk überspringen und später lesen

![[Pasted image 20250320112541.png]]