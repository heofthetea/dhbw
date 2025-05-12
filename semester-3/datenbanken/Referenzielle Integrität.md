>alle Daten müssen vom [[DBMS]] konsistent gespeichert werden.

[[Konsistenzüberwachung]]

- Es dürfen keine <span style="color:rgb(245, 154, 35)">widersprüchlichen</span> oder <span style="color:rgb(245, 154, 35)">mehrdeutigen</span> Werte an verschiedenen Stellen der [[Datenbank]] liegen.
- Der [[Fremdschlüssel|Fremdschlüsselwert]] darf sich immer nur auf einen [[Schlüssel|Primärschlüsselwert]] eines _existierenden_ [[Tupel|Tupels]] beziehen -> darf nicht [[null]] sein.


> [!hint] Ein [[Fremdschlüssel]] muss zu einem **gültigen** [[Schlüsselattribut|Primärschlüssel]] der anderen [[Entität]] zeigen.
## Anschaulich
- Alles, was gespeichert ist, muss dem [[Semantik|semantischen]] Entwurf folgen.
1. Herr Müller heiratet und ändert seinen Nachnamen
2. Es wird in nur einer Tabelle geändert
	1. Das geht nicht!!!