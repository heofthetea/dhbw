[[Direct Memory Access]]

1. Init: [[Register]] beschreiben mit Quell-; Ziel-[[Adresse]], Anzahl Byte, Modi
2. Auslösen
	1. durch Programm: "Programmierer" löst aus (z.B. Datei laden)
	2. häufiger aber: bei Bedarf: Device -> DMA-Controller -> CPU ([[Direct Memory Access|DMA]] Request)[^1]
3. Übergabe
	1. [[CPU]] übergibt Buskontrolle an [[DMA Controller]]
	2. [[CPU]] koppelt sich selbst ab
4. Datentransfer - gesteuert von [[DMA Controller]] => [[Modi DMA]]
	1. [[Adressierung]], [[Steuersignal]]
	2. Zähler erhöhen
5. [[DMA Controller]] gibt Buskontrolle zurück; [[CPU]] übernimmt wieder

> [!hint] Alles, was mit [[DMA Controller]] zu tun hat, ist **in Hardware** gegossen => quick as fuck boiiii

### Vorteile
- Keine Software-Schleife => keine Befehle lesen => ist schneller
- (mit [[CPU Cache]]: [[CPU]] kann nebenher weiterarbeiten)


[^1]: z.B.: Netzwerkkarte hat Block komplett empfangen -> Sagt "hey bitte abholen"