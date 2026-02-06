[[Klassifikator]], [[Klassifikation]], [[NIcht-parametrisches Verfahren]]

- Vorraussetzung: [[Menge]] an Punkten im n-dimensinoalen Raum
	- hier: 2 dimensionen
- **Idee**: "Alles was nah beieinander ist, ist ähnlich"

> [!hint]- Auswahl von $k$ beeinflusst [[Overfitting]]/[[Underfitting]]
> Meistens ist $k \in \set{5, 7}$

| Vorteile                                     | Nachteile                                               |
| -------------------------------------------- | ------------------------------------------------------- |
| Benötigt _kein_ Training                     | Klassifikation an sich dafür rechenintensiv as fuck<br> |
| kann auch nicht-lineare Entscheidungsgrenzen |                                                         |


> [!hint] Eine Optimierungsmöglichkeit: In einem Training für die einzelnen [[Klasse|Klassen]] repräsentative Samples rausfinden -> macht die Mengen kleiner, weniger Rechenaufwand.

## Anwendung
- wenn sich der [[Datensatz]] während Betrieb oft ändert
- wenn man wenig Datensätze hat
## Vorgehen
1. Berechne [[Norm eines Vektors|Distanz]] zwischen $x$ und allen Trainingssamples
2. Suche die $k$ Samples mit kürzesten Abständen
3. Wähle [[Klasse]] $\omega_{i}$, zu der die nächsten $k$ Nachbarn gehören
## Bilder
![[Pasted image 20251027085646.png]]

![[Pasted image 20251121123950.png]]