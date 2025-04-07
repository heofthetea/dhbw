> Information eines einzelnen [[Bit]] am Input auf 6 Takte verteilen
> aus einem Bit werden mehrere 

[[Schieberegister]], [[Codierung]], [[XOR]], [[Punktierung]]

> [!question] Warurm das ganze? Dient der [[Forward Error Correction]] auf Sender-Seite.


> [!hint] In der unteren Schaltung gilt [[Coderate]] $r = \frac{1}{2}$ -> Verdopplung der zu übertragenden [[Information]], ist blöd. Deshalb => [[Punktierung]]


![[Pasted image 20250320110900.png]]

- [[Bit]] wird jeden [[Taktsteuerung|Takt]] weiter geschoben -> inssgesamt 6 Takte
- zwei Nutzungen der [[Information]], die ein [[Bit]] haben kann
- [[Information]] des [[Bit]] wird in 6 Takten verwendet

> [!info] Kenngrößen
> - $k$ - Informationsbits
> - $n$ - Codebits
> - $b$ (manchmal $m$) - Anzahl der [[D-Flipflop (Delay-FF)|D-Flipflops]]
> - $L_{c}$ - wie oft hat ein [[Bit]] Auswirkung auf den Ausgang, i.e. wie oft wird abgezweigt (auch nicht verwendete werden gezählt lol => $k(b+1)$) 
