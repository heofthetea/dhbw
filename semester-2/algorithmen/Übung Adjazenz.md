[[ungerichteter Graph]], [[beschrifteter Graph]]
![[Pasted image 20240712095236.png]]

### Adjazenzmatrix
[[Adjazenzmatrix]]

> [!warning] in Klausur immer noch deutlich machen, dass ein Feld leer ist!

|     | a   | b   | c   | d   | e   | f   | g   |
| --- | --- | --- | --- | --- | --- | --- | --- |
| a   |     | 4   | 8   |     |     |     |     |
| b   | 4   |     | 9   | 8   | 10  |     |     |
| c   | 8   | 9   |     | 2   |     |     |     |
| d   |     | 8   | 2   |     | 7   | 9   |     |
| e   |     | 10  |     | 7   |     | 5   | 6   |
| f   |     |     |     | 9   | 5   |     | 2   |
| g   |     |     |     |     | 6   | 2   |     |



### Adjazenzliste
[[Adjazenzliste]]

```list
a -> {(b, 4), (c, 8)}
b -> {(a, 4), (c, 9), (d, 8), (e, 10)}
c -> {(a, 8), (b, 9), (d, 2)}
d -> {(b, 8), (c, 2), (3, 7), (f, 9)}
e -> {(b, 10), (d, 7), (f, 5), (g, 6)}
f -> {(d, 9), (e, 5), (g, 2)}
g -> {(e, 6), (f, 2)}
```
