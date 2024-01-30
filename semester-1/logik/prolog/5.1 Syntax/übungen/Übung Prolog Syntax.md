#übung-logik 
[[Master Prolog Syntax]]
### Übung Terme
[[Term]]
[[semester-1/logik/scripts/Logik-handout.pdf#page=217|Logik-handout, page 217]]
1. vINCENT = [[Atom]]
2. Footmassage = [[Variable]]
3. variable23 = [[Atom]]
4. Variable2000 = [[Variable]]
5. big_kahuna_burger = [[Atom]]
6. 'big kahuna burger' = [[Atom]]
7. big kahuna burger = 3x [[Atom]] _or_ Nonsense
8. 'Jules' = [[Atom]]
9. `_Jules` = [[Variable]]
10. `'_Jules'` = [[Atom]]

---
### Übung komplexe Terme
[[Komplexer Term]]
[[semester-1/logik/scripts/Logik-handout.pdf|Logik-handout, page 221]]
1. `loves(Vincent, mia)` = [[Komplexer Term]]
	1. Argument: Vincent ([[Variable]]), mia ([[Atom]])
	2. `loves` ist [[Prädikat]]
2. `'loves(Vincent, mia)'` = [[Atom]]
3. `Butch(Boxer)` = _Nonsense_ (groß geschriebener Funktor)
4. `boxer(Butch)` = [[Komplexer Term]]
	1. Argument: Butch [[Variable]]
	2. `boxer` ist [[Prädikat]]
5. `and(big(burger), kahuna(buger))` = [[Komplexer Term]]
	1. [[Prädikat]]: `and`
	2. Argumente:
		1. [[Komplexer Term]] big(burger)
			1. big: [[Komplexer Term]] - _FUNKTOR_ 
6. `and(big(X), kahuna(X))` = [[Komplexer Term]]
	1. gleich wie _5._, except mit Variablen anstatt Atomen
7. `_and(big(X), kahuna(X))` = _Nonsense_ (Prädikat mit leading Underscore)
8. `(Butch kills Vincent)` = _Nonsense_ (what the fuck????)
9. `kills(Butch Vincent)` = _Nonsense_ (kein Trennkomma)
10. `kills(Butch, Vincent` = _Nonsens_ (no closing Bracket)
11. `kills(Butch, Vincent)` = [[Komplexer Term]]
	1. Argumente: 2x verschiedene [[Variable]]
	2. kills ist [[Prädikat]]
12. `kills(Butch(X), Vincent(Y))` = _Nonsense_ (Funktoren groß geschrieben)
