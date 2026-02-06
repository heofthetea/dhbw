> Verletzung des "information-hiding" Prinizps

- zwei Clients ([[Function]]) wissen über die interne Struktur eines [[Object]] bescheid

#todo Beispiel Zeitreihen

- wie diese edge cases behandelt werden, hängt von der implementierung ab

### Lösung

"Make illegal states unrepresentable"
-> [[Summentyp|Summentypen]] verwenden

#### Für Zeitreihen-Beispiel

- use [[Hash Map]] -> Verhindert das doppelte WErte problem etc.

> [!error] Problem: kann zu eng gefasst sein

-> lösung: es ist einfach eine [[Abbildung|Funktion]] $date \longrightarrow T$

> [!hint] Ansatz ähnlich zu [[Lgk 1.2 Prädikatenlogik.pdf|Prädikatenlogik]]
