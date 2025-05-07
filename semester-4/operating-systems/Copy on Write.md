> Daten werden erst kopiert, wenn etwas an den [[Daten]] verändert wird

"`cp` agiert wie `mv` - bis was verändert wird"

### Ablauf
1. [[Prozess]] erzeugt bereits existierende [[Page]]
2. [[Prozess]] bekommt von [[Betriebssystem|OS]] Verweis auf diese existierende Page
3. [[Prozess]] versucht zu schreiben
	1. Löst "write" [[Interrupt|Trap]] aus
4. [[Betriebssystem]] kopiert [[Page]] an neue [[Adresse]], updated die [[MMU]] translation table
5. [[Prozess]] versucht schreiben nochmal -> sollte jetzt tun