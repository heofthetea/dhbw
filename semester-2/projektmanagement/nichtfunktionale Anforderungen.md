> Etwas, was nicht direkt mit der Funktion des Produkts zu tun hat

### Beispiele Laufendes System
- Benutzerfreundlichkeit
- **Performance** -> wie schnell
- **Sicherheit** -> [[Hub IT Security]] (hat aber auch viele funktionale Aspekte ([[IAM]]))
- **Dokumentation**
- **Kapazität** -> Anzahl benutzer z.B., etc.
- [[Availability]]
- **Systems Management** -> Monitoring/Healthcheck, Backups

### Beispiele bzgl. Änderungen am System
- **Wartbarkeit** => Fehleranalyse (do the logs make sense?), Einspielen von Updates
- **Portability** => z.B. [[Containerization]], oder Datenbank-unabhängiges Design
- **Skalierbarkeit** => [[Horizontal Scaling]] vs. [[Throw faster hardware at the problem|Vertical Scalability]]

### bzgl. Lösungs-bezogene Anforderungen
- **Geschäftsbedingte Anforderungen** (z.B. weltweiter Zugriff)
- **Technische Vorgaben** (z.B. Produktkataloge)
### Beispiele
- "Das Anzeigen eines Artikels darf nicht länger als 2 Minuten sein."
- "Der Artikelstamm muss persistent sein"
- "Artikelstamm muss Daten von woanders holen"