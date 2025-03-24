> Kommunikation über Nachrichten

- Quellprozess sendet Nachricht an Zielprozess

## synchrone Nachricht
- [[Prozess]] [[Prozess Blocking|blockiert]] beim Senden/Empfangen
- [[verbindungslose Kommunikation]]

## asynchrone Nachrichten
- Keiner der [[Prozess|Prozesse]] blockiert
- [[verbindungsorientierte Kommunikation]] -> benötigt Quittierung, ansonsten wird erneut gesendet
- Erfordert Puffer als Nachrichtenzwischenspeicher -> [[Message Queue]]