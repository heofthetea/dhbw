> Standard für Kommunikation auf [[MAN]]

- gelöstes Problem: [[Routing Tabelle|Routing Tables]] von [[Router|Routern]] sind ziemlich lang, und abarbeiten braucht
- arbeitet irgendwo zwischen [[Data Link Layer]] (2) und [[Network Layer]] (3)
	- Gibt auf [[MAC Adresse|MAC]] Ebene ein Label mit
	- Wird dynamisch von weiteren [[Router|Routern]] hinzugefügt oder abgearbeitet
		- jedes Label hat ein eigenes [[TTL]] Feld

> [!info] Es wird nicht mehr ausgewertet "wo soll es eigentlich hin?" - sondern nur: "wo muss es als _nächstes_ hin?"

> [!warning] Benötigt besondere [[Switch|Switches]], die diese Zusatzinformation auch bearbeiten können

- wird oft als VPN-Technologie verkauft --> aber [[Beispiel MPLS-1]] ist wirklich nicht private 
	- ist nur ✨Marketing✨
