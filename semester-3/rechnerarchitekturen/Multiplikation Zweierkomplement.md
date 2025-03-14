basierend auf Algorithmus für [[Parallele Multiplikationsschaltung]]

## a) Anpassung
1. [[oBdA]] $v \gt 0, u \lt 0$ 
	1. if $|v| = |u|$: (ggf. Negieren) --> in normalem Fall angekommen
2. Bei Addition immer bis $n + m$ Bit mit richtigem Bit auffüllen!

![[Pasted image 20240923093102.png]]

## b) Korrektur
> Anstatt Algorithmus anzupassen, einfach Ergebnis korrigieren

aus trivialen Umformungen folgt:
- [[oBdA]] $D > 0, C < 0$
	- Entstehender Fehler bei normalem Algorithmus ist $2^{N} \cdot D$
- $D \lt 0, C \lt 0$ :
	- Entstandender Fehler $2^{N} \cdot D + 2^{N} \cdot C$
