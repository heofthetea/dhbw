> Aus einer $n$-bit Zahl zu einer $m \gt n$-Bit Zahl machen, ohne den Wert der Zahl zu verändern

[[Binärsystem]]
## unsigned Extension

$$\sum\limits_{i = 0}^{n - 1}a_{i} 2^{i} = \sum\limits_{i = 0}^{m - 1}b_{i} 2^{i}$$
- Zahl mit $m$ bits soll denselben Wert haben wie Zahl mit $n$ bit

$$1010_{2} = 0000\, 1010_{2}$$

## signed Extension
[[Zweierkomplement]]
$$(-1)^{a_{n-1}} \cdot \sum\limits_{i = 0}^{n - 2}a_{i}\cdot2^{i} = (-1)^{b_{m-1}} \cdot \sum\limits_{i = 0}^{m - 2}b_{i}\cdot2^{i}$$

- $b_{m - 1} = a_{m-1}$ 

> [!hint] Anschaulich: Vorzeichen abtrennen, [[Folge]] aus Nullen einfügen

![[Pasted image 20240916090100.png]]