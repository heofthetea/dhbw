> [[Attribut|Attribute]] sind atomar.

Eine [[Relation]] erfüllt die [[1NF|erste Normalform]], wenn jede [[Entität]] für jedes [[Attribut]] der [[Relation]] nur **einen** Datenwert besitzt, und keine Mehrfachattribute vorhanden sind.[^1]
=> Mehrwertige Attribute werden in eine neue [[Relation]] ausgelagert.

> [!hint] Die [[1NF]] ist in der Regel automatisch erfüllt.
> Da per Definition der [[Relation]] alle Datenwerte **atomar** sind.
 

## Beispiel
![[Pasted image 20241105141351.png]]

- ist nicht in [[1NF]], weil das Attribut `Abschlüsse` zusammengesetzt ist.
	- Probleme: Änderungsanomalie; wenn "Wirtschaftsinformatik" irgendwo falsch geschrieben ist z.B.

[^1]: def **Mehrfachattribut**: mehrere, durchnummerierte Attribute für _ein_ Mengen-Attribut. Beispiel: Telefonnummer 1, 2, 3, 4...
