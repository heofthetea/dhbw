[[Backwards Error Correction]], [[verbindungsorientierte Kommunikation]]

- man kann bis zu $n$ Nachrichten schicken, ohne dass auf Quittung gewartet werden muss

> [!hint] Nutzt die [[Leitung]] effizienter als normale [[Backwards Error Correction|BEC]]

```python
credit = n
while credit > 0:
	send(package)
	credit --
	if(received acknowledgement):
		credit ++
```

## Sammelquittungen
- _Ein_ Acknowledgement für mehrere Packages senden
- heißt: "Go Back n"

> [!hint] Benötigt zusätzliche Timer: Für jedes Paket einen

## Grafik
![[Pasted image 20241106101730.png]]