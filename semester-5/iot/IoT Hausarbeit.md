### general
- max. 7 Seiten -> max. 1 Seite pro Unterpunkt :panicmonster:
- [[Iot-seminararbeit-dhbw-ws2025-1.pdf]]
## 1. Architekturübersicht
(erste scratch version)
![[Pasted image 20251119111911.png]]


## 2. Beschreibung der zu erfassenden Daten und Eigenschaften der unteren layer im Value Stack
### physische Devices

| Aufgabe                        | Maß               | Art des Sensors                      |
| ------------------------------ | ----------------- | ------------------------------------ |
| Raumluftüberwachung            | CO2               |                                      |
|                                | Luftfeuchtigkeit  |                                      |
|                                | Temperatur        |                                      |
| Lautstärke                     | dB                | Schallsensor                         |
| Parkplätze                     | Radar/Ultraschall | (wo es keine Lichtschranken gibt)    |
|                                |                   | Lichtschranke an Ein- und Ausfahrten |
| Belegung der Besprechungsräume |                   | Kamera & elementare ML Detektion     |

Zum Energiemanagement: ???
- i guess wir machen Aktuatoren die Maschinen automatisch ausschalten


## 3. Beschreibung der Connectivity
- [[WLAN]] für Besprechungsräume
	- ggf. auch Ethernet, mach ich einfach abhängig von wo wir sind
- [[LoRaWAN]] für die Parkplätze
- Für die stationären sachen (mit Stromversorgung) reicht WLAN

## 4. Energieverbrauch
ICH HASSE DIESEN TYPEN


## 5. Datenmengen

## 6. Anwendung



## 7. [[Metadata]]
