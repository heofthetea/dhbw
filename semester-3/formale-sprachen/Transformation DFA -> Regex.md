> [!hint] [[DFA]] ist einfacher, weil mehr Einschränkungen

[[Recursion]]
## Konventionen
- [[Zustand|Zustände]] sind natürliche Zahlen
- [[Startzustand]] ist $0$

### Ansatz
- Für jeden [[Zustand]] $q$ eine Gleichung für den [[Regulärer Ausdruck|regulären Ausdruck]] $r_{q}$ erzeugen
	- $r_{q}$ erkennt die Sprache, wenn man in $q$ startet
> [!warning] Endzustand muss [[leeres Wort]] erkennen!

--> Wird zu einem [[Gleichungssystem]]? dafooqqq



[[Beispiel 2.40 Transformation DFA zu RegEx]]

## Algorithmus
1. [[Rekurrenzrelation]] für jeden [[Zustand]] erstellen
2. von hinten nach vorne: 
	1. [[Rekurrenzrelation]] zu Form $r_{i} = r_{i}s + t$ bringen
	2. [[Arden-Lemma]]
	3. einsetzen in andere Gleichungen
3. $r_{0}$ ist das Ergebnis