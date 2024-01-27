Nachteil bei [[Asynchronzähler]]: Zeitlicher Shift von Flipflop zu Flipflop
--> bei hoher Anzahl von Flipflops: Kann so langsam sein, dass es einen Takt überspringt

_Lösung_: Alle Takteingänge parallel ansteuern
- vor Taktsignal erfolgt Festlegung, ob ein Flipflop zum nächsten Takt geschaltet wird
- ==> T-FF nicht mehr feasible --> [[Zweiflankengesteuertes JK-FF]]

Entscheidung, was passieren soll, muss _vor_ anliegen der Taktflanke anliegen
==> Verschaltung abhängig von _Wert_ der Ausgänge


## Vorwärtszähler
![[Synchronzähler vorwärts]]

## Rückwärtszähler