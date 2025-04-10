[[n-stellige Relationship]]

[[Gargantuan Übung Ternäre Beziehung SQL]]

![[Pasted image 20250326151716.png]]

> [!warning] Es darf nichts [[SQL Löschregeln#Foreign Key auf Null setzen|null gesetzt]] werden, weil alles als [[Schlüssel]] fungiert -> darf nicht [[null]] sein

=> einfach für alles [[SQL Löschregeln#CASCADE|cascaden]] lol

- MA: cascade
- Projekt: cascade
- Ort: restricted (wieso will ich nen Ort löschen?)
	- wieso nicht [[null]]: $MA \times Proj \rightarrow Ort$; wird jetzt Ort [[null]] gesetzt, _kann_ es passieren, dass irgendwo zwei verschiedene $(m, p) \in MA \times Proj$ auf zwei verschiedene Orte abbilden -> geht nicht

| MA  | Ort | Projekt |
| --- | --- | ------- |
| 1   | A   | 4711    |
| 2   | A   | 4711    |
| 3   | B   | 4711    |
| 2   | B   | 5050    |
