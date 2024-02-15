- Variablenbelegung bei Unifikation _in globaler Scope_
- _kein_ [[Master Prolog|Prolog]] Programmentwurf
	- eventuell Fehlersuche / Erweitern
	- "custom Funktionen" nicht verwenden (bsp. [[Prädikat suffix]]) - wird vorgegeben in Klausur
- Bleistift ist nicht dokumentengerecht
- Bei Fragen "welche Antwort?":
	- _Fehler_ berücksichtigen!!
		- [[Endlosschleife|Endlosschleifen]] sind auch Fehlermeldungen

#todo Suchbäume üben



#### Formalisierung
_Junktoren_ binden stärker als _Klammern_

#### Tableau
- Oder-Regel _nur_ anwendbar, wenn generiertes Element noch nicht auf Pfad steht!!!!
- _Abschlusssatz_: "Jeder Pfad enthält einen Clash, deswegen ist $\varphi$ unerfüllbar."
- gegebenen Term _nicht_ vereinfachen !!!
- verschiedene Pfade sind unabhängig voneinander zu behandeln


#### Unifikation
- $\cdot //\cdot$ Syntax erklären
- ANGABE VON UNIFIKATOR REICHT!!!!
	==> es muss nicht jeder Schritt angegeben werden

#### Resolution
- Aufpassen mit Faktorisierung
- mit Einheitsklauseln ($\set{\lnot K(a)}$) arbeiten, um andere Klauseln kleiner zu machen!
- bereits generierte Klauseln verwenden!!!!