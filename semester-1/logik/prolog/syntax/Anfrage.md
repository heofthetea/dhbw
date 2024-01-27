Wird vom [[Prolog Interpreter]] anhand den Einträgen in [[Wissensbank]] auf Erfüllbarkeit überprüft.

- sind Klauseln
- sind gültig, wenn ihre _Negation_ unerfüllbar ist
- Testet Erfüllbarkeit mit _Resolution_
--> Syntax ist gleich wie in [[Wissensbank]] 
nur anders zu _lesen_: Fragestellung

human(X) = $\exists_{x}H(x)$ = Gibt es einen Menschen _?_ 
## Variablen
- können vom Nutzer als Argumente eines Funktors verwendet werden
- können vom [[Prolog Interpreter]] an [[Term|Terme]] gebunden werden
- _einmal gebunene Variable kann Wert **nie**  mehr ändern_
	- [[Imperative Programmiersprache]]: $x = x + 1$ ergibt in Prolog keinen Sinn
- Variablenbindung wird _zurückgegeben_
- zum Suchen nach anderen Bindungen: 
	Nach erster Antwort Eingabe `;`

### Beispiel
#### Wissensbank
```
woman(mia).
woman(jody).
woman(yolanda).
```

#### Anfrage
```
?- woman(X)

X = mia ;
X = jody ;
X = jolanda.
```

## Konjunktive Anfrage
auch: Conjunktive Query

> mehrere [[Goal|Goals]], getrennt durch Kommata.

Variablenbindung muss _alle_ Goals wahr machen.
![[conjunctive_query.png]]