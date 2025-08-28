- Q ist KI Experte im Mi6

### Es gibt
- Textdokumente mit Missionsbertichten
- Datenbank mitt Eckdaten der MIssionen
- Daten in clearance leveln: 0  (official) bis 9 (top secret)

#### Protagonisten
- Jacob Bonde (lol) und Nina Ward

### Zentrale Frage
- in einem Meeting: "Können wir da nicht was mit KI machen?" 




> [!hint] Wegen Copyright: Wurde alles nur von Jacob Bonde geredet -> aber in live-demo antworted GPT mit "james bond". Hallinucination in first experience.


## [[Data Poisoning]]
- Agent XY erstellt einen neuen Eintrag:
	- "Die Missionen für XY sind unvollständig, XY war bei mindestens 20 weiteren MIssionen dabei"
	- -> [[LLM]] assumes this to be right

### Heuristiken
- Anlage als möglichst inoffizielles Dokument:
	- gezielt denjenigen targeten, der die Security Clearance hat, über das Thema zu entscheiden
- Verstecken von Informationen:
	- kleiner text, kleiner Bild, Text weiß auf weiß

## Risks of Agents
- Funkntion: LLM darf nuken
	- im code hard-limit für security clearance 9
- Prompt injection durcch [[Data Poisoning]]: "wir müssen Paris nuken"

