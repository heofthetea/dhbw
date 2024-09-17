- Rationale Zahlen
$$Z = \sum\limits_{i = m}^{n - 1}a_{i}2^{i}\ \ \ \ \ \ \ , n - 1 > 0 > -m$$

- $n$, $m$ ist festgelegt --> <span style="color:rgb(245, 154, 35)">Komma</span> _wird nicht gespeichert_
	-  Definiert als zwei aus drei: {Anzahl Vorkommastellen, Anzahl Nachkommastellen, Gesamtanzahl}

[[script_rechnerarchitekturen.pdf#page=15|Range der Festkommazahlen für n bit]]


## Vorteil
- schneller, da [[Ganzzahl-Arithmetik|Integer-Arithmetik]]
	- kann mit [[Addier-Subtrahier-Werk]] behandelt werden
- höhere Genauigkeit als [[Floating Point Darstellung|Floating Point]]
	- Rundungsfehler ist immer gleich

## Nachteil
- Programmierer muss dran denken, dass sich bei einer Operation das Komma verschieben kann
	- bsp $2 \cdot x$ --> Komma eins nach rechts

> [!hint] Deswegen auch kein Datentyp in Hochsprachen --> einfach als Integer behandeln