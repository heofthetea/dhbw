[[Beispiel Softwarehaus Miniwelt]]

- $Abteilung:\set{[\underline{AbteilungsNr}, ...]}$
- $Kurs: \set{[\underline{KursID}, Name, Fach]}$
	- $besucht: \set{\underline{[MitarbeiterNr \uparrow}, \underline{KursID \uparrow}]}$ 
- $Mitarbeiter: \set{[\underline{MitarbeiterNr}, Name, Geburtstdatum, AbteilungsNr \uparrow, ChefNr \uparrow]}$
	- $Sekretär: \set{[\underline{MitarbeiterNr\uparrow}, mysteryAttribute1]}$
	- $Finanzdude: \set{[\underline{MitarbeiterNr \uparrow}, mysteryAttribute 2]}$
	-  $Projektdude: \set{[\underline{MitarbeiterNr \uparrow}, mysteryAttribute 2]}$
	-  $ProjektLeiterDude: \set{[\underline{MitarbeiterNr \uparrow}, ProjektNr \uparrow]}$
- $Leistung: \set{[\underline{LeistungsNr}, \underline{AuftragsNr \uparrow}, \underline{KundenNr \uparrow} ..., ProjektID \uparrow]}$
	- $arbeitet\, in: \set{[\underline{MitarbeiterNr \uparrow}, \underline{LeistungsNr \uparrow}]}$
- $Projekt: \set{[\underline{ProjektNr}, MitarbeiterNr \uparrow]}$ 
- $Auftrag: \set{[\underline{AuftragsNr}, \underline{KundenNr \uparrow}, ...]}$
- $Kunde: \set{[\underline{KundenNr}, Name, ...]}$

