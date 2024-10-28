1. [[Flag]] gesetzt?
2. welche Flag? --> [[Mögliche Quellen für Interrupt]]
3. [[Priorität Interrupt|Priorität]] entscheiden
	1. aktuell laufendes Programm  $\alpha$
	2. Quelle $\beta$
	3. Wenn $\beta \gt \alpha$ --> stattgeben; ansonsten [[Flag]] bleibt gesetzt
		1. falls stattgegeben: [[Priorität Interrupt|Priorität]] neu vergeben
4. Zieladresse: Startadresse der [[Interrupt]]-Routine (Entscheidung anhand [[Interrupt-Typen]])
5. Aufruf: Rücksprungadresse merken; [[Programm Counter|PC]] umsetzen
6. ([[Interrupt]] Routine ausführen)
7. [[Priorität Interrupt|Priorität]] zurücksetzen (ist nun wieder $\alpha$)

> [!hint] [[Flag]] wird nie automatisch zurückgesetzt



> [!hint] [[Interrupt]] wird beendet durch eigenen Befehl (bei 8051: [[RETI]])

---

## Abstrahiert:
#todo