- Brücke zwischen [[Swapping]] und [[Paging]]
- sorgt dafür, dass nicht _alle_ Teile eines [[Prozess|Prozesses]] im [[Memory]] sein müssen
- Nur selten genutzte [[Page|Pages]] werden ausgelagert


## Ablauf
- am Anfang sind alle [[Page|Pages]] in [[Memory]]
- Wird [[Memory]] voll, muss Platz gemacht werden
- einzelne Pages werden ausgelagert
- Verschiebung durch [[Betriebssystem]] => transparent für [[Prozess]]!

### Nutzen von [[Interrupt|Interrupts]]
- [[Page]] nicht in [[Memory]] -> wirft Page Fault
- [[Interrupt]] löst Routine aus, die auf der [[Hard Drive]] die Daten findet
- [[Daten]] werden gladen
- Page Table Eintrag wird aktualisiert
- "Hey Prozess, probier's nochmal"

## Beispiel: [[Datenbank|Datenbanken]]
- Query-Optimierer werden im Swap gehalten
- wird nur benötigt, wenn _neue_ Queries rein kommen und optimiert werden müssen

