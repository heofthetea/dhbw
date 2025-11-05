Merkmale werden reduziert, indem die optimale [[Teilmenge]] der extrahierten Merkmale gesucht wird.

> [!hint] Im Gegensatz zu [[Merkmalstransformation]] bleibt die [[Semantik|Bedeutung]] der einzelnen Merkmale erhalten.

## Möglichkeiten
### Forward
- trial and error Attribute hinzufügen
- Nachteil: Man baut Bias selber ein ("was _ich_ denke, dass gut ist")

### Backward
- mit allen Anfangen
- Attribute streichen und schauen, ob's besser wird
- Nachteil: dauert ewig, macht keinen Spaß

### Wrapper
- wähle $k$ stück aus, probiere alle [[Permutation|Permutationen]] mit $k$ Attributen aus
- Problem: [[exponentielle Laufzeit]], dauert ewig
