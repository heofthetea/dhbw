> [[Adresse]] für Interrupt-Routine fest mit [[Mögliche Quellen für Interrupt|Quelle]]

- Ziel-[[Adresse]] der [[Interrupt]]-Routine ist fest mit Quelle verbunden
	- z.B. Exgternal Interrupt 0: $0003_{16}$
	- Timer 0: $000b_{16}$
	- External Interrupt 1: $0012_{16}$
### Quellen
- 10 interne: Timer, ADC, UART, ...
- 7 externe: Int$\varnothing$

### [[Priorität Interrupt|Prioritäten]]
- Global: **E**nable **A**ll **I**nterrupt: $EAL = 0 \Longrightarrow$ alle gesperrt
- individuell: z.B. [[Bit]] IEN-[[Register]]
	- einzelne Quellen an und aus schalten
- 4 Prioritäts-Level -> Zuordnung [[Mögliche Quellen für Interrupt|Quelle]] zu Level durch [[Flag]]
- innerhalb eines Levels: Rangfolge bestimmt durch [[Polling]]

## Ablauf
[[Ablauf Interrupt]]

1. Anfrage: [[Flag]] setzen S5P2
2. ob + welches [[Flag]] (abfrage durch Hardware [[Polling]] im folgenden [[Maschinenzyklus]])
3. entscheiden:
	1. **ablehnen** wenn: 
		1. Interrupt gleicher oder höherer [[Priorität Interrupt|Priorität]] ist
		2. Pollingzyklus ist **nicht** letzter [[Maschinenzyklus]] des aktuellen [[Instruktion|Maschinenbefehl]]
		3. aktueller [[Instruktion|Befehl]] ist `RETI` oder [[Instruktion|Befehl]] ändert [[Interrupt]]-[[Register]] (beides ändert die laufende [[Priorität Interrupt|Priorität]])
4. [[Priorität Interrupt|Prio]] neu setzen: automatisch in [[Interrupt]]-Logik
5. Zieladresse: **fest** mit Quelle verbunden
6. Aufruf: Rücksprungadresse auf [[Stack]]
	1. Interrupt-Adresse durch [[Programm Counter]]
7. (ausführen: [[Flag]] wird durch Software gelöscht)
8. Beenden durch [[RETI]]
9. Prio zurück: automatisch in Interrupt Logik
10. Rücksprung: Adresse vom [[Stack]] nach [[Programm Counter|PC]]

> [!hint] 4\. Prio neu setzen - Setzt irgerndwo ein Register oder so, welche [[Priorität Interrupt|Priorität]] der **aktuelle Prozess** hat

