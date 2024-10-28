> Die [[Lookup Table|Lookup Tables]] für [[Segmentverwaltung mit Tabellen]]

- **LDT** - Local Descriptor Table
	- schnelle Prozessumschaltung
	- Prozessumschaltung bedeutet nicht "neue Tabelle ansteuern", sondern nur anderen Eintrag in LDTR
- **GDT** - Global Descriptor Table


## Zugriff auf die Dinger im Speicher

> [!info]- [[CPU]] benötigt zusätzliches Register, um zu wissen, wo die [[Lookup Table]] im [[Memory|Speicher]] liegt

> [!hint] Um diese [[Register]] zu beschreiben, gibt es spezielle Befehle.


GDT Base: Wo fängt die Global Descriptor [[Lookup Table]] an?
GDT Limit: Wie lange ist die Global Descriptor Tabelle?
- Enthält als Eintrag nicht Start des Segments, sondern start der LDT
 ![[Pasted image 20241024105202.png]]

> [!hint] In dem Bild das sind alles irgendwelche [[Register]] die auf [[Adresse|Adressen]] von irgendwelchen Tabellen zeigen


- LDTR zeigt nur auf einen Eintrag
	- Boundaries der Local Desriptor Table liegen in der GDTR gespeichert