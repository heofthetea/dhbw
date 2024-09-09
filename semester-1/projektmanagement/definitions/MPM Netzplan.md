==> Funktioniert analog zu [[CPM Netzplan]], aber mit ekligen Tabellen
[[Kante|Kanten]] enthalten keine Information mehr, sondern nur [[Knoten]]
_dicker Balken_ kennzeichnet _kritischen_ Pfad

|                            | TITEL  |                        |
| -------------------------- | ------ | ---------------------- |
| frühester Anfangszeitpunkt | Dauer  | frühester Endzeitpunkt |
| Spätester Anfangszeitpunkt | Puffer | spätester Endzeitpunkt |
![[mpm_example.png]]

### verschiedene Arten von Abfolgen
In naiver Darstellung: _Normalfolge_ --> Wenn ein Prozess aufhört, fängt der nächste an
_Anfangsfolge_: Bevor Phase A nicht angefangen hat, kann man mit B nicht anfangen
--> aber: Wenn Phase A begonnen hat, kann auch mit B begonnen werden
- Bsp.: Design und Programmierphase
_Endfolge_: Erst wenn Phase A abgeschlossen ist, kann B abgeschlossen werden
- Bsp.: Testing: B braucht Funktion A, um getestet werden zu können
_Sprungfolge_
- Bsp.: neuer Datenbankserver
	- A: Neuer DB-Server in Betrieb genommen
	- B: Alter DB-Server abgeschaltet
	- erst wenn _neuer DB-Server_ funktional ist, kann _alter Server_ abgeschaltet werden
		- Alter Server muss weiterhin parallel laufen, da ja ggf. was passiert werden können
		- Da _A_ einen _Betrieb_ beschreibt, kann Ende gar nicht richtig fest gemacht werden
![[abfolgen_mpm.png]]

