$\mathcal{U}$ ist eine [[Determinismus|deterministische]] [[Turing Machine]], die andere [[Turing Machine|Turing Machines]] simuliert.
- basiert auf [[Gödelisierung|Codierung von anderen Turing Machinen]]

> [!warning] Das geht **nur** bei Turing Maschinen, nicht bei anderen Automaten.

> [!info] Aus Existenz von $\mathcal{U}$ folgt: Jedes mit [[Turing Machine|Turing Maschinen]] lösbares Problem kann in Software gelöst werden.
> Ist Grundlage für die Existenz und Macht von [[Minimalsystem|Minimalsystemen]]

#### Eingabe
- [[Gödelisierung|Codierung]] $g(M)$ einer [[Turing Machine]] $M$
- [[Gödelisierung|Codierung]] $g(w)$ eines Eingabewortes $w$ für $M$

#### Verhalten
- $\mathcal{U}$ verhält sich mit der Eingabe $g(M)$ und $g(w)$ genau wie $M$ auf $w$:
	- akzeptiert wenn $M$ akzeptiert
	- [[Haltekonfiguration|hält]] wenn $M$ hält
	- läuft unendlich lange wenn $M$ unendlich lange läuft

## Funktion
- Eingabe: $g(M)bbb\,g(w)$
1. [[Gödelisierung|Codiere]] Startkonfiguration auf zweitem Band
	1. Bandinhalt links von Kopfposition ($\square$)
	2. Startzustand $q_{0}$
	3. Bandinhalt beginnend mit Kopfposition ($g(w)$)
2. finde [[Folgekonfiguration]] mit Hilfe von $g(M)$
	1. suche [[Übergangsrelation|Übergang]] $(q, s, ...)$ in $g(M)$:
		1. vergleiche aktuellen [[Zustand]] $q$ von $M$ mit den Übergangen in $g(\Delta)$
		2. vergleiche aktuelles [[Symbol|Bandsymbol]] $s$ mit den Übergängen in $g(\Delta)$
3. wenn kein Übergang möglich:
	1. akzeptiere, wenn $q$ [[Endzustand]] ist
	2. [[Haltekonfiguration|halte]]
4. sonst: modifiziere aktuelle [[Konfiguration TM|Konfiguration]] entsprechend dem gefundenen Übergang
5. repeat at $2$

> [!hint] Zweites Band speichert immer die aktuelle [[Konfiguration TM|Konfiguration]] von $M$.