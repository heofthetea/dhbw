>  Darstellung einer signed [[Binärsystem|Binären]] Zahl.

Vorzeichenbit 0 --> positiv
Vorzeichenbit 1 --> negativ

![[Pasted image 20240916093621.png]]

> [!hint] Genauigkeit
> - Absolut: $Z_{n} - Z_{n-1} = 1$ --> konstant
> - Relativ: $\frac{Z_{n}}{Z_{n-1}}$ --> nicht konstant
## Verfahren
> [!info] Verfahren ist für Codierung und Decodierung gleich.
1. Invertiere die Zahl
2. addiere 1-

> [!warning] Enthält die Zahl führende Nullen, müssen diese selbstverständlich auch Invertiert werden!!
## Beispiel
Decodierung: $110010$
Signing Bit 1 --> negativ
1. invertieren: $001101$
2. addiere 1: $001110$ 
==> $110010$ im Zweierkomplement ist $-14_{10}$  

## Rechnen
$a - b = a + (-b) = a + \lnot b + 1$ 