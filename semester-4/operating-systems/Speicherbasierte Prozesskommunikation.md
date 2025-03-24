> [!hint] In der Praxis weniger beliebt.

## Kommunikation über [[File]] 
- benötigt Mechanismus für simultaneous File access
-> über einen Lock auf  den [[File]]

## Kommunikation über shared [[Memory]]
- Nutzung von gemeinsamen Bereichen
- besondere [[Speicherverwaltung]] des [[Betriebssystem]] -> [[Copy on Write]] wird genutzt
- kann große Datenmengen verarbeiten

> [!hint] Nutzt [[Page Sharing]].

> [!hint] Ist die schnellste Form des Datenaustausches.