[[File|Datei]]

1. in [[exFAT Bitmap]] werden alle [[FS Cluster|Cluster]] freigegeben
2. im [[FAT Root Dir]] wird die Datei nur als "gelöscht" markiert

=> Alle Daten auf Festplatte bleiben bestehen, auch in [[FAT]]


### gelöscht markieren
- das erste [[Byte]] wird zu `E5`
- => kann nicht rekonstruiert werden

> [!hint] Wird oft genutzt: "joa, ist ja nicht die gleiche Datei".

## Richtig Löschen
1. Eintrag löschen in [[FAT Root Dir]] und [[FAT]] Tabelle
2. Überschreiben mit $0$ und $1$



