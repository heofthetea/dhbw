> Optimierung der Performance eines [[Machine Learning]] Modells

## Optimierung

#todo kein Bock alter

### Merkmalsreduktion
- [[Vor- und Nachteile von vielen Merkmalen]]
- mehr [[Merkmal|merkmale]] = mehr Dimensionen (duh)
- [[Overfitting#Curse of Dimensionality|Curse of Dimensionality]]: 
	- mehr [[Dimension|Dimensionen]] = Datenpunkte weiter auseinander
	- mehr Abstand = einfacher, [[Entscheidungsgrenze|Trennlinie]] zu finden, die alles _perfekt_ seperiert
	- => [[Overfitting]]
- **Vorteile**: mehr Merkmale -> mehr Information

> [!hint]- [[Dimension]] der Merkmale sollte immer **bedeutend** kleiner sein als die Mächtigkeit des [[Datensatz|Datensatzes]].
> Aus 50 Datenpunkten 100 Merkmale extrahieren "überfordert" das Entscheidungsverfahren einfach

#### Möglichkeiten für Reduktion
- [[Merkmalstransformation|Transformation]]: Automatisiert mehrere [[Merkmal|Merkmale]] zusammenfassen
	- <span style="color:rgb(126, 198, 54)">Vorteil</span>: es geht keine Information verloren
	- <span style="color:rgb(255, 0, 0)">Nachteil</span>: die resultierenden Merkmale sind gibberish
- [[Merkmalsselektion|Selektion]]: Einzelne [[Merkmal|Merkmale]] (von Hand) auswählen
	- <span style="color:rgb(126, 198, 54)">Vorteil</span>: Bedeutung der Merkmale
	- <span style="color:rgb(255, 0, 0)">Nachteil</span>: Introduction von Bias (automatisiert dauert's zu lange)
- [[Merkmalsreduktion durch NN]]: Einfach ein [[Neural Network]] drauf schmeißen
	- idk appease the PR team or sth

## Training
### [[Klassifikatortraining]]
1. Einteilen des [[Datensatz]] in:
	1. Trainingsdaten
	2. Testdaten
	3. ggf. Validierungsdaten
2. [[Klassifikator]] mithilfe der **Trainingsdaten** trainieren (was genau "trainieren" ist ist abhängig vom Verfahren)
3. ggf. mithilfe der Validierungsdaten auf [[Overfitting]]/[[Underfitting]] testen und ggf. neu trainieren
4. Fertig traininerten [[Klassifikator]] auf Testdaten loslassen
	1. Hier will man rausfinden, wie gut der [[Klassifikator]] generalisieren kann (i.e. [[Overfitting]] überprüfen)
5. wenn Performance okay -> fertig (ansonsten nochmal probieren, ggf. anderes Verfahren)

> [!hint] Die Validierung ist basically eine [[Simulation]] des Tests. Der Unterschied ist, dass sich die Daten überschneiden dürfen (auch durch [[Kreuzvalidierung]] direkt miteinbezogen werden)

> [!warning] Trainings- und Testdaten dürfen sich **nie** überschneiden

![[Pasted image 20251103092754.png]]

### Alternative Methoden
- [[Active Learning]]: On-demand Nachlabeln von unbekannten [[Daten]]
	- Vorab-[[Klassifikatortraining|Training]] wird gering gehalten
	- Modell kann im [[Operativer Einsatz ML Modell|Operativen Einsatz]] "nachlernen"
- [[Reinforcement Learning]]: halb-überwacthes Lernen
- [[One-Class Classification]]: $n$-[[Klasse|Klassen]]-Problem auf ein $2$-klassen-Problem zurückführen
	- z.B. anstatt "Welche Farbe hat das Auto?" zu "ist das Auto rot oder nicht?"
	- sinnvoll wenn man nur an einer [[Klasse|Klassen]] wirklich interessiert ist

### Evaluation
> Wie weiß ich, wie gut mein [[Klassifikator]] ist?

- Passiert in der Testphase -> wenn der [[Klassifikator]] auf die Testdaten losgelassen wird
- Gibt verschiedene [[Fehlermetrik|Metriken]]:
	- [[Fehlerrate|Error Rate]]: misst die **falsch** getroffenen Entscheidungen

$$ER = \frac{n_{ij}}{N},\qquad i \neq j$$
- $n_{ij}$: Anzahl der Punkte aus [[Klasse]] $i$, die als [[Klasse]] $j$ klassifiziert wurde
- $N$: Anzahl aller Datenpunkte

> [!error] [[Fehlerrate|Error Rate]] gewichtet [[False Positive]] und [[False Negative]] gleich stark -> ist oft nicht gut.

#### Konfusionsmatrix
- [[Konfusionsmatrix]]
- Auf **Diagonale**: Alle richtigen Entscheidungen
	- Daneben: Die entsprechend Falschen Entscheidungen
	- im Binären: die [[False Negative]] und [[False Positive]]s
##### [[Konfusionsmatrix]] im binären Fall

| (nach unten: geschätzt) | $\omega_{0}$ ~ negative | $\omega_{1}$ ~ positive |
| ----------------------- | ----------------------- | ----------------------- |
| $\hat{\omega}_{0}$      | TN                      | [[False Negative]]      |
| $\hat{\omega}_{1}$      | [[False Positive]]      | TP                      |

> [!hint] Man kann [[Fehlerrate|Error Rate]] und [[Accuracy]] aus der [[Konfusionsmatrix]] ableiten -> Konfusionsmatrix enthält echt mehr Information.

