_Funktor_ muss ein [[Atom|Atom]] sein
_Argumente_ können _beliebige_ [[Term]] sein
- Getrennt durch Kommata
- Eingeschlossen in Parentheses
- Anzahl Argumente: _Stelligkeit_
- _kein (!!)_ Leerzeichen zw. Funktor und Klammer


Bsp.: 
```
loves(emil, hanh)
woman(hanh)
eats(emil, big_kahuna_burger)

```

Beliebig _nestable_:
```
knows(koons, father(butch))
loves(vincent, wife(marsellus)) %lol
less(zero, s(s(s(zero))))
```

### Unterschied zu Prädikatenlogik
> Einzigartigkeit Funktoren

- Funktionssymbol $f^{(i)}$ hat feste stelligkeit i
- $f(x, y)$ ist syntaktisch falsch

--> in Prolog:
vgl. Java _function overrloading_
- Atom kann mit _unterschiedlichen_ Stelligkeiten verwendet werden
- -> $f(x)$ kann parallel mit $f(x,y)$ verwendet werden
	- Notation: `f/1` = $f^{(1)}$, `f/2` = $f^{(i)}$
		- --> Hilfreich in _Fehlermeldungen_ (benutzen Schreibweise)
