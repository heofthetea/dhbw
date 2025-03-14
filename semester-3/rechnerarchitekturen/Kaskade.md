> Verbinde mehrere [[Interrupt Controller|PICs]] miteinander


## Ablauf
1. Konfiguration
	1. K1: an Anschluss $2$ hängt ein [[Interrupt Controller]]
	2. K2: ich bin an Anschluss $2$ von K1
2. **K2**: Anfrage an K1
3. **K1**: Anfrage an [[CPU]]
4. **K1**: <span style="color:rgb(126, 198, 54)">Meldet an K2 </span>
5. **CPU**: bestätigt (an K1 und K2)
6. **K2**: reagiert
...

![[Pasted image 20241028110649.png]]