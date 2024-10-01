> [!warning] Assembler ist case-insensitiv

- es geht um _Zeilen_ - **endet mit Carriage Return!!**
- [[ASM label]]

```asm
label: Befehl; Kommentar
```

- Alle 3 Sachen sind optional

> [!hint] Doppelpunkt und Semikolon sind nur Pflicht, wenn es ein label bzw. einen Kommentar gibt!

### Dateiende
```asm
END ; Pseudo-Assemblerbefehl
```
- spezifiziert, dass es _nichts mehr zu übersetzen gibt_


> [!warning] Bedeutet nicht, dass das Programm fertig mit _Ausführung_ ist!!!


## Beispiel
```asm
anton:  CLR A ; Akkumulator löschen
		JMP anton
```
- Programmiert Endlosschleife lol