
> [!hint] Behandelt Gerät -> Speicher
## über CPU

**Programm**: 
1. Quell-[[Adresse]] bestimmen/berechnen
2. [[CPU]] liest von Gerät in [[Register]]
3. Zieladresse bestimmen/berechnen
4. [[CPU]] schreibt von [[Register]] in [[Memory|Speicher]]
5. irgend nen Zähler erhöhen
6. nochmal wenn `Zähler < Anzahl`

### Eigenschaften
- viele [[BUS-System|Bus]]-Zugriffe
	- abgesehen von Gerät lesen/schreiben, muss auch noch jeder [[Instruktion|Befehl]] gelesen werden
	=> hoher Zeitbedarf & hohe Busbelastung
- belegt [[Register]] in der CPU
	- Quell-, Ziel-[[Adresse]], Zähler
- benötigt Rechenzeit