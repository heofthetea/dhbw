> Information eines einzelnen [[Bit]] am Input auf 6 Takte verteilen
> aus einem Bit werden mehrere 

[[Schieberegister]], [[Codierung]], [[XOR]], [[Punktierung]]

> [!question] Warurm das ganze? Dient der [[Forward Error Correction]] auf Sender-Seite.


> [!hint] In der unteren Schaltung gilt [[Coderate]] $r = \frac{1}{2}$ -> Verdopplung der zu übertragenden [[Information]], ist blöd. Deshalb => [[Punktierung]]


![[Pasted image 20250320110900.png]]

- Am Anfang müssen D-FFs in einen definierten Zustand -> Lauter $0$en (steht auch in [[WLAN Präambel]] (als Tailbits))
- [[Bit]] wird jeden [[Taktsteuerung|Takt]] weiter geschoben -> inssgesamt 6 Takte
- zwei Nutzungen der [[Information]], die ein [[Bit]] haben kann
- [[Information]] des [[Bit]] wird in 6 Takten verwendet

## Kenngrößen
- $k$ - **Informationsbits** (= Anzahl Eingänge)
- $n$ - **Codebits** (= Anzahl Ausgänge)
- $b = m$ - **Symbolspeichertiefe** - Anzahl der [[D-Flipflop (Delay-FF)|D-Flipflops]] auf dem längsten [[Pfad]]
- $L_{c} = k(b+1)$ - wie oft hat ein [[Bit]] Auswirkung auf den Ausgang, i.e. wie oft wird abgezweigt (auch nicht verwendete werden gezählt) 
