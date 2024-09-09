### 26 Wieso sollte man ein Projekt in verschiedene Phasen strukturieren?
- Überblick bewahren --> transparent
- Bessere Zeiteinschätzung
- effizientere Planung --> wird _wirtschaftlicher_
- Entwicklungsaufwand wird reduziert

### 27. Einzelne Phasen eines Projektvorgehensmodells
[[Grundmodell Projektphasen]]
- Definition
- Planung
- Implementierung
- Tests
- Inbetriebnahme


### 28. was ist sequenzielles Vorgehensmodell
[[Rein Sequentielles Modell]]
- eine Phase muss komplett abgeschlossen sein, bevor man zur nächsten Phase übergehen kann
- Ein Ergebnis muss vorliegen

### 29. Besondere am [[Wasserfallmodell]]
- man kann zurück in andere Phasen
- (weil starr sequentiell wäre sinnlos lol)


### 30. V-Modell
[[V-Modell]]
- In jeder Phase wird direkt überlegt, wie man das testet
- was sind die Use Cases? Auch Besprechung mit Kunde

### 31. 'Phasenmodelle müssen zu Projekt passen'
- Nicht für jedes Projekt ist jedes Phasenmodell anwendbar
- wenn Kunde _genau_ weiß, was er will (3000 Seiten [[Lastenheft]]), sind sequentielle Modelle gut
#### Beispiel
- Schiffbau: Agil wäre stupid, weil wenn Rumpf da ist, ist er da
- Software-Development: Wasserfall stupid, weil konstante Revision nötig

### 32. kritischer Pfad
[[CPM Netzplan]], [[MPM Netzplan]]
- Ist besonders zu beobachten, weil er _keinen_ Puffer hat
	--> wenn dort etwas länger dauert, dauert das ganze Projekt länger
### 33. Wie erstellt man einen Zeitplan
- man braucht [[Arbeitspaket|Arbeitspakete]] aus [[Projektstrukturplan]]
- Jedes [[Arbeitspaket]] wird abgeschätzt (in Personenstunden)
- [[MPM Netzplan|Netzplan]] ergänzen durch Zeitschätzungen jedes Knoten
	- Berücksichtigen von Urlaub, Wochenenden, unterschiedlichen Arbeitszeiten etc.
#### Wenn Zeit zu lang wird
- mehr parallelisieren
- mehr Ressourcen (Humans etc.)
	- aber: "Chinesen-Prinzip": Es wird nicht unbedingt besser, wenn mehr Leute mitarbeiten
- **wichtig**: Outsourcen von unterschiedlichen Pfaden
	- In-Shore: nah am Ausgangsort (bsp. EU)
	- Off-Shore: irgendwo in der Welt (bsp. China)

### 34. vier Einflussgrpßen für Berechnung des Aufwands
[[005 Terminmanagement]], [[Magisches Dreieck]]
- Qualität des Produkts
- Quantität des Produkts
- Produktivität (wie viel arbeitet jemand)
- Anzahl der Mitarbeiter

> [!info] Fun Fact
> Produktivität steigt, wenn man von 40 auf 35 Stunden runter geht lol
### 35. What is GANTT Diagram
[[GANTT-Chart Netzwerkplan]]
- Balkendiagramm
- Beinhaltet:
	- Wer arbeitet mit
	- wie lange
	- welches [[Arbeitspaket]]
	- bezeichnet Meilensteine und Projektfortschritt

### 36. MPM-Netzplan
[[MPM Netzplan]]
- Netzplan, bei dem einzelne Knoten Arbeitspakete darstellen
- Kritischer Pfad ist markiert

### 37. wie erhält man SEZ, SAZ und GP?
[[MPM Netzplan]] muss existieren
--> Dann: Vom Endzeitpunkt rückwärts rechnen lol

> [!warning] Bezieht sich immer auf ein einzelnes [[Arbeitspaket]]/Knoten!
#### Spätester Endezeitpunkt

#### Spätester Anfangszeitpunkt

#### Gesamtpuffer


### 38. Normalfolge bei MPM
[[MPM Netzplan]]
**Normalfolge**: Ende von Knoten A wird zu Anfang von Knoten B verbunden
- "wenn ein Prozess aufhört, fängt der nächste an"

![[abfolgen_mpm.png]]