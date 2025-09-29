> matches one of the given characters


- Beispiel: Matche alle Vokale:
```regex
[aeiou]
```
### Negated Class
```regex
[^aeiou]
```

> [!hint] Eine Character Class um ein einzelnes Sondersymbol agiert wie eine Escape Sequence.

> [!info] Jedes valides Literal ist eine valide Character Class, die nur das Zeichen beschreibt: `[a] = a`


## Character Ranges
$$[lo-hi]$$

> [!warning] Definiert eine Range aus [[ASCII]]-Zeichen.