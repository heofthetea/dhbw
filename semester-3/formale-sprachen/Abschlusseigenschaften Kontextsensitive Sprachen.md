[[Kontextsensitive Grammatik]]

- die [[Kontextsensitive Sprache|Kontextsensitiven Sprachen]] ist abgeschlossen unter [[Operationen auf Mengen#Union|Vereinigung]], [[Operationen auf Sprachen#Produkt|Konkatenation]] und [[Klenee-Stern]].

## Vereinigung
$$ P = \set{S \rightarrow S_{1}, S \rightarrow S_{2}} \cup P_{1} \cup P_{2}$$

## Klenee-Stern
1. erzeuge künstliche eine zweite [[Grammatik]] $G'$ mit Hilfssymbolen
2. behandele $G$ und $G'$ wie bei [[#Konkatenation]]

$$P = \set{S \rightarrow \epsilon|S_{0},\ S_{0} \rightarrow S_{1}\ |\ S_{1}S_{1}'\ |\ S_{1}S_{1}'S_{0}} \cup P \cup P'$$

## Konkatenation
$$P = \set{S \rightarrow S_{1}S_{2}} \cup P_{1} \cup P_{2}$$

### Problem
- Durch Regelanwendungen von $L_{1}$ kann [[Kontext]] für [[Startsymbol]] von $L_{2}$ erzeugt werden

![[Pasted image 20241025131706.png]]

==> Abhilfe:
- ersetze [[Terminalsymbol]] durch [[Nichtterminalsymbol]] (analog zu [[Transformation in CNF]])
- benenne diese [[Nichtterminalsymbol|NTS]] disjunkt um ($X_{a1}; X_{a2}; ...$) 