enthält Filme, Schauspieler, Regisseure.



### Daten laden
- absichtlich weirdes Datenformat, um Sachen "etwas interessanter zu gestalten"
- _Kind of_ CSV, aber scuffed
	- double quotes
	- Kommata als Trennzeichen
- Format ist scheiße: Leerzeichen etc (<span style="color:rgb(0, 176, 240)">Da gab's ne String methode für</span>)


Aufbau:
- Wenn Zeile anfängt mit `New_Entity` --> neuer Datentyp
	- Nach `New_Entity` kommen Namen der Attribute
- Nach dieser Deklarativen Zeile kommen die nächsten Daten

> [!warning] Datei ändert sich nicht!
> - muss nicht behandelt werden, dass sich die Reihenfolge der Datentypen oder Attribute ändern könnten
> - Kann einfach runter geladen werden und done



#### Umsetzung
- unnötige Leerzeichen ignorieren
- Duplikate ignorieren (--> use Set?)
- [[Java Exception|Exception]] Handling für Datensatz, der Fehler hervorruft --> ist aber nicht intended von Johannes!!!!\


## Features des Tools
- COMMAND LINE INTERFACE!!!
- Kann alles in memory passieren, man muss keine Dateien zwischenspeichern
- Eingabeargument über [[Java Command Line Arguments]]!!

1. Stichwortsuche nach Filmen
2. Stichwortsuche nach Schauspieler
3. Filmnetzwerk anzeigen
	1. query by film_id
	3. Ausgabe vorgegeben --> Look on moodle
5. Schauspielernetzwerk anzeigen


## Bewertung

- Datenmodell mit UML gibt mit die Meisten Punkte
- Code verständlich und Docs --> 10P
- just use javadoc lol
- Ob das Ding alles kann, was es soll, sind 6\%
- "Dateiformat missachtet" - was bedeutet das?
	- 

![[Pasted image 20240604173137.png]]