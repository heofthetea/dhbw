> dedizierte Hardware für behandeln von [[Interrupt|Interrupts]]
> kurz: **PIC** (Programmable Interrupt Controller)

> [!warning] Kann _on-chip_ (in der [[CPU]] drin) oder _off-chip_ (neben der CPU) sein

- Programmable weil: Wird konfiguriert durch Software (idR. das [[Betriebssystem]])
- Besitzt $8$ Eingänge -> translated Signal in einen Ausgang (ähnlich zu [[Multiplexer]])
	- sind für modernes System zu wenig --> [[Kaskade]]

## Aufgabe
```mermaid
flowchart LR
CPU <--> PIC <--> Gerät
```
- Agiert als [[Proxy]] zwischen [[CPU]] und Gerät, das [[Interrupt]] schalten will
- Erzeugt Vektornummer und [[Priorität Interrupt|Priorität]]

## Aufbau
0. Programm konfiguriert PIC
1. Gerät: Anfrage an [[Interrupt Controller]]
2. **PIC**: Anfrage an [[CPU]]
3. **CPU**: Antwortet über [[INTA]] an Controller
4. **PIC**: schickt Bitfolge an [[CPU]]
5. **CPU**: Aufruf [[INTR]] über Routine
6. Routine: Kommunikation mit Gerät über [[BUS-System|Bus]]

