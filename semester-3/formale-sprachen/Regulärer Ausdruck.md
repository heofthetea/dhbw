Über dem gegebenen [[Alphabet]] $\Sigma$:
$$R = \Sigma \cup \set{\varnothing,\ \epsilon,\ +,\ \cdot,\ ^{*},\ (,\ )}$$
- dabei darf keins dieser Sondersymbole Teil aus $\Sigma$ sein: 

> [!warning] Eine einzelner [[Regulärer Ausdruck]] _beschreibt eine_ [[Sprache]]

> [!warning] Die [[Menge]] aller [[Regulärer Ausdruck|regulären Ausdrücke]] über $\Sigma$ ist selbst eine [[Sprache]] - $R_{\Sigma}$

> [!warning] Nicht verwechseln mit der Software-Umsetzung: [[RegEx]].


## Regeln
1. $\varnothing$ ist ein regulärer Ausdruck, der die leere Sprache enthält. --> $\set{}$
2. $\epsilon$ bezeichnet die Sprache, die nur das [[leeres Wort|leere Wort]] enthält. -> $\set{\epsilon}$
3. Jedes Symbol $\in \Sigma$ ist in sich ein regulärer Ausdruck
> [!warning] Wie Essen im Rucksack:
> 1\. ist ein leerer Rucksack
> 2\. ist ein Rucksack mit einer leeren Tüte drin

### Operationen
seien $r, s \subset R_{\Sigma}$ (aka korrekte reguläre Ausdrücke über $\Sigma$)
4. $r+s$ beschreibt die [[Operationen auf Mengen#Union|Vereinigung]] der Sprachen $r$ und $s$ (in Literatur und [[RegEx]] oft $r | s$)
5. $r\cdot s$ beschreibt das [[Operationen auf Sprachen#Produkt|Produkt]] der Sprachen von $r$ und $s$
6. [[Klenee-Stern]] doing [[Klenee-Stern]] things
7. Vorrang der Operatoren: $* \gt \cdot \gt +$ 

> [!warning] Unterschied zwischen Gleichheit und Äquivalenz!
> Zwei Reguläre Ausdrücke sind äquivalent, wenn sie dieselben [[Wort|Wörter]] enthalten - gleich, wenn sie dasselbe [[Wort]] $\in R_{\Sigma}$ 


## Beispiele
- $L_{\mathbb{N}} = 0 + 1 \cdot (0 + 1)^{*} = \set{0} \cup \set{1} \cdot {0,1}^{n}$
- Wörter, die nur aus $1$ bestehen: $1 \cdot 1^{*}$ 
[[Regular Expression Beispiele]]