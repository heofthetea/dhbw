> Jede nichtdeterministische [[Turing Machine]] kann durch eine [[Determinismus|deterministische]] [[Turing Machine]] simuliert werdenl.

- verwende [[k-Band Turing Machine|2-band Turing Machine]]
	- Band $1$: Aufzählung aller möglichen [[Konfiguration TM|Konfigurationen]] von $M$ auf $w$
		- funktioniert als [[Queue|Warteschlange]]
		- beginnend mit $q_{0}w$
		- zusätzliche Bandsymbole:
			- $q_{i}$ [[Zustand|Zustände]]
			- $*$ als Trennsymbol
			- $!$ für aktuelle Konfiguration $c_{a}$
	- Band 2: Zwischenspeicher für Konfigurationen
### Ablauf
1. Wenn $c_{a}$ akzeptierende [[Haltekonfiguration]] ist, gehe in akzeptierende [[Haltekonfiguration]]
2. sonst kopierre $c_{a}$ auf Band 2, gehe ans Ende von Band 1
3. für $k$ mögliche Übergänge von $c_{a}$: erzeuge $k$ Kopien von $c_{a}$ auf Band 1 (getrennt durch $*$)
4. modifiziere Kopien auf Band 1 entsprechend $\Delta$
5. bewege Marker $!$ eine Konfiguration nach rechts
6. repeat

