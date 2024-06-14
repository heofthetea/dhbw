> [!def] Random Access
> Random Access beschreibt den Zugriff an eine beliebige Stelle einer Datenstruktur.

[[Array]] wird beschrieben durch [[Pointer]] $p$ zum ersten Element, und den Datentyp (zB. `int`) des Arrays

Index an der Stelle $i$ kann also berechnet werden durch:

```c
p + sizeof(int) * i
```

--> That's [[Why do indices start at 0]]

==> **Zugriff auf ein Element erfolgt in [[Konstante Laufzeit|konstanter Laufzeit]]**
