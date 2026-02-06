> Auch ein Umgang für nicht-lineare [[Entscheidungsgrenze|Trennlinien]] bei [[Support Vector Machine|SVMs]]

[[Abbildung]]


- Mapping [[Merkmal]]-[[Vektor]] $x$ zu einem neuen Vektor $z$

$$\Phi: x \longmapsto z$$

|              | $x$                              | $z$             |
| ------------ | -------------------------------- | --------------- |
| Region $R_i$ | nicht [[Konvexe Fläche\|konvex]] | konvex          |
| $D$          | nicht linear trennbar            | linear trennbar |
=> Vorraussetzung: Finden eines Gemeinsamen Mappings

## Vorteile
- allgemeine Entscheidngsgrenze
- man kann [[Support Vector Machine|SVM]] in simpelster Form nutzen

## Nachteile
- für alles jenseits der 3. Dimension ist es sehr schwer, ein Mapping zu finden
- [[Dimension]] sehr schnell sehr groß
	- Da kommt auch wieder [[Overfitting#Curse of Dimensionality|Curse of Dimensionality]] in's Spiel

### Beispiel
![[Pasted image 20251121142149.png]]


- [[Norm eines Vektors]]
![[Pasted image 20251121142515.png]]