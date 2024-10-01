> Paralleladdierschaltung

> [!hint] Das Carry Bit wird durchgereicht

"Rechnen wie in der Grundschule":
$$A + B = \sum\limits_{i = 0}^{n} (A_{i} + B_{i})$$

> [!hint] [[Komplexität|Laufzeit]]: $n \cdot t_{VA}$ 


- Addition von zwei 4-bit Zahlen kann höchstens eine 5-bit Zahl (4 + CarryOut) ergeben
![[Pasted image 20240205160411.png]]
--> Für _kleinste_ Stellung: [[Halbaddierer]]
Für _alle weiteren Additionen_ darauf: [[Volladdierer]]

### Aufbau
![[Pasted image 20240205160548.png]]