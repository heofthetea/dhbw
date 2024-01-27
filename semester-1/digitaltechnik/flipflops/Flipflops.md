- _Bistabile_ Kippstufe: Sowohl Zustand $Q_{1} = 0$ als auch $Q_{1} = 1$ stabil
	- --> stabil bedeutet: Zustand wird gehalten, bis er _manuell überschrieben wird_
- Ausgänge sind _immer invers_ zueinander (außer in [[Verbotener Fall]])
- Beide Eingänge auf 0 sind [[Speicherfall]] 
### Allgemeines Schaltzeichen
![[flipflop_basic.png]]
- In Kästchen steht Information zu FF
- "Bobbel" bedeutet: $A_{2} = \lnot A_{1}$ 
	- ==> _wichtigste Prämisse!!_
	- es folgt: $A_{2}$ liefert keine zusätzliche Information --> *Es wird immer nur $A_{1}$ betrachtet!!*
![[Verbotener Fall]]
#### Grundstellungen
Beschreibt, was bei Anlegen von _Versorgungsspannung_ an $Q_{1}$ anliegt
- **I = 1**: Logische 1 (HIGH)
- **I = 0**: Logische 0 (LOW)
- **NV**: gleich wie _bevor_ Abschaltung der Versorgungsspannung

### Statisch vs. dynamische Eingänge
###### Statisch
Reagiert auf _Wert_ des Eingangs (s. [[#Allgemeines Schaltzeichen]])

###### Dynamisch
Reagiert auf _Änderung_ im Wert des Eingangs
--> Primär für Taktsteuerung genutzt

Unterscheidung: _ansteigende_/_abfallende_ Flanke
- ansteigend: Wert von 0 auf 1
![[ansteigende_flanke.png]]
- abfallend: Wert von 1 auf 0
![[abfallende_flanke.png]]