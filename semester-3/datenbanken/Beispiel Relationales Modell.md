[[Relationales Modell]]

![[Pasted image 20241008161213.png]]

- 3 [[Relation|Relationen]]:
	- Proj.-Leiter
	- leitet
	- Projekte

> [!hint] "leitet" ist eine [[Abbildung]]: $leitet:\ Projekt \rightarrow Projektleiter$
> [[Schlüsselattribut]] von **Projekt** (das [[Urbild]]) reicht als [[Schlüssel]] für **leitet** aus
> => kann durch [[Fremdschlüssel]] vereinfacht werden!!!


## Bearbeitung
$$Projekte: \set{[\underline{ProjNr}, Name,...,\ PersNr. \uparrow]}$$
$$Proj.Leiter: \set{[\underline{PersNr.}, Vorname, Nachname,...]}$$

![[Pasted image 20241008162445.png]]

> [!hint] Spalte heißt nicht "PersNr", damit indicated wird, aus welcher [[Relationship]] dieser [[Fremdschlüssel]] kommt