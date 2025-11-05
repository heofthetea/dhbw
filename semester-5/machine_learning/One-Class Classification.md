> Ziel: Samples einer Klasse zuverlässig erkennen können

> [!hint] alle anderen Klassen sind wurscht

## Herangehensweise
- Primär mit Samples der gewünschten Klasse [[Klassifikatortraining|trainieren]]
	- Zur verfeinerung: geringe Menge relevanter Out-of-class-Samples im Training verwenden
	- aber: nur als "other", nicht was genau die anderen sind

## Wann sinnvoll?
- andere Samples sind egal
- wenn es während Training wenig (oder keine) gelableten Samples anderer Klassen gibt
- Wenn das labeln der anderen hohe Kosten verursacht
- wenn die anderen variabel sind

## Beispiel
- Outlier-/Anomaliedetektion
- Novelty Detection (wenn irgendwas unbekanntes komt)