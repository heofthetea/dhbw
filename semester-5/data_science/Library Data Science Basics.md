
# Statistik
## Arten von Lernverfahren
### parametrisch vs. nicht-parametrisch
- Prerequisite: 

| [[Parametrisches Verfahren]]                                                           | [[NIcht-parametrisches Verfahren]]                                    |
| -------------------------------------------------------------------------------------- | --------------------------------------------------------------------- |
| nimmt an, dass eine [[Korrelation]] in einer mathematisch beschreibbaren Form vorliegt | trifft keine Annahmen über [[Korrelation]] der [[Attribut\|Merkmale]] |
| -> braucht kein Machine learning ([[Modellbasierte Signalverarbeitung]])               | braucht machine Learning ([[Lernbasierte Signalverarbeitung]])        |

###  überwacht vs. unüberwacht

| [[Überwachtes Lernverfahren]]                          | [[Unüberwachtes Lernverfahren]]                                            |
| ------------------------------------------------------ | -------------------------------------------------------------------------- |
| [[Datensatz]] ist gelabelled                           | [[Datensatz]] ist nicht gelabelled -> Machine muss alles selber rausfinden |
| Man kann immer genau sagen, wie genau das Ergebnis ist | man kann die Genauigkeit nicht genau festlegen                             |
| es gibt ein "richtiges" ergebnis                       | es gibt kein "richtiges" Ergebnis                                          |
> [!hint] [[Reinforcement Learning]] steckt irgendwo dazwischen -> man gibt Feedback, aber erst in der Zukunft (e.g. Schach)



# Plotting
- [[Jede Grafik hat eine Message]] => muss Audience mitgegeben werden (sonst machen die ihr eigenes Ding)

> [!warning] Die Art der [[Grafik]] (und Wahl dessen, was gezeigt wird), lenkt diese Message!!

## Guter Aufbau: Grafik
### Generell - [[Grafik#Aufbau]]
- immer einen Titel -> convey [[Jede Grafik hat eine Message|Message]]!!
- y-Achse links, x-Achse unten 
- Achsen immer Beschriften (mit Einheiten)!
- immer 2D

> [!hint] [[Intervall|Intervalle]] der Achsen gut wählen
> Beispiel: Umsatz in `Mio €` anstatt überall noch $000\,000$ dran hängen zu haben mit Einheit $€$

### Heuristiken - [[Grafik#Heuristiken]]
- **Längen** > Flächen (können Menschen besser konzeptuieren)
- **Einfach** > komplex
- **Zeit** ist immer **x-Achse**
- keine **Farben** (außer die Farben haben Bedeutung)
	- wenn ja: Legende!!! + ggf. [[Total Order|Ordnung]] codieren
	- auch: achten auf Farbenblinde
- keine **konkreten Werte** in das Diagramm schreiben -> use [[Tabellen formattieren|Tables]]

 > [!question]- [[Balken- vs. Liniendiagramm|Balken oder Linien]]?
 > Linien nur, wenn es sich um einen zeitlichen Verlauf handelt

> [!question]- [[Balkendiagramm]] oder [[Säulendiagramm]]?
> - default: Säulen (= vertikal)
> - [[Balkendiagramm|Balken]] nur wenn:
> 	1. Balken codieren Zeit -> s. Heuristics
> 	2. Balken haben [[Total Order|Order]] -> dann aufsteigend/absteigend [[Sortieren]] nach Länge der Balken, oben nach unten


## Guter Aufbau: Tabellen
[[Tabellen formattieren]]

> [!hint] Tabellen nur benutzen, wenn die _konkreten_ Werte wirklich wichtig sind

1. Aussehen wie [[Relation]] in [[SQL]] => Attribute nach rechts, oben hingeschrieben
2. Zahlen rechtsbündig
3. [[Boolsche Menge|binäre]] Sachen (wahr/falsch) mittig
4. Text linksbündig
5. Kopfzeilen Formattieren wie text & hervorheben

> [!warning] Keine fucking farben bruv

