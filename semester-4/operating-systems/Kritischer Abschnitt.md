> Für [[Prozess]]: Phase, in der der [[Prozess Scheduler|Scheduler]] nicht mehr eingreifen darf.

- verhindert [[Anomalie|Anomalien]] in [[Information]]

### Anforderungen
1. **mutual exlusion** -> nur ein [[Prozess]] darf im [[Kritischer Abschnitt|kritischen Abschnitt]] sein
2. Prozesse dürfen sich nicht **untereinander hindern**, in den Kritischen Abschnitt zu wechseln
3. **no starvation** -> Wartet ein [[Prozess]] auf den [[Kritischer Abschnitt|Kritischen Abschnitt]], muss [[Betriebssystem]] sicher stellen, dass er auch dort hin kommen
4. Alle Anforderungen für den [[Kritischer Abschnitt|kritischen Abschnitt]] müssen **unabhängig** von [[CPU]]-Leistung erreicht werden

