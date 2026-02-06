---
aliases:
  - CNN
---
> Bilderkennung

[[Faltung]], [[Neural Network]]

- Einbau von **faltenden Schichten**
	- Eingangsdaten mit Kernel [[Faltung|falten]]
- Schichten extrahieren dann durch diese Faltung Merkmale
- Parameter Sharing => Gewichtsmatrix mit weniger Parametern als bei vollvernetzter Schicht (-> kleineres Netz)

> [!hint] Idee: die Schichten können isoliert betrachtet werden -> die [[Activation Function]] macht halt irgendwie Faltung oder so schlag mich tots

![[Pasted image 20251205133149.png]]
### Vorteile
- Reduzierung 
- geringere Komplexität (??) als standard [[Deep Learning|Deep Neural Network]]

### Nachteile
- [[Faltung]] reduziert Bildqualität (aha wieso hä)
	- Behebung:
		- **Upsampling**: Einfach zeilen-spaltenweise duplizieren (1 pixel wird zu einem 3x3 Pixel grid bspw)
		- **Inverse Faltung**: Eine Faltung durchführen, die das Bild wieder größer macht
		- **Padding**: Einfach nullen drum herum


## Pooling
> [!info] **Motivation**: Fokus auf zu kleine Details führt zu [[Overfitting]]

- Fenster über das Input Bild schieben
- irgendeine magic Metrik wird aus den Bildwerten innerhalb dieses Fensters berechnet
- der berechnete Wert wird _anstelle des tatsáchlichen Inhalts_ weitergegeben
	- => man nimmt details raus

![[Pasted image 20251205133808.png]]
### Arten
- max pooling: nimm den größten wert
- average pooling: nimm das [[Arithmetisches Mittel]]