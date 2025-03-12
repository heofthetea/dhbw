> Existenzabhängiger Entitäts-Typ

[[Entität]], [[Partitionierung]]

- Gekennzeichnet durch Doppelstrich um [[Entität]] und [[Relationship|Beziehung]]
- in [[Relationales Modell]]: es wird das [[Schlüsselattribut]] des Vaterattributs zusätzlich mit aufgenommen

![[Pasted image 20241001160638.png]]

- "Wenn ein Kunde verschwindet, verschwindet auch der Auftrag"
- "Wenn Auftrag verschwindet, verschwindet auch die Leistung"

## Warum?
1. Lösch-Grund: Wenn Kunde gelöscht wird, brauch ich den Auftrag auch nicht mehr
2. Eindeutige Identifikation: Ohne die Kundennr. kann ich den Auftrag nicht eindeutig identifizieren