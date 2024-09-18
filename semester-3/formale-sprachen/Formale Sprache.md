> möglicherweise unendliche [[Menge]] $L$ von [[Wort|Wörtern]]

Eine [[Formale Sprache]] $L$ über einem [[Alphabet]] $\Sigma$ ist eine [[Menge]] von [[Wort|Wörtern]] aus $\Sigma^{*}:\ L \subset \Sigma^{*}$ 



> [!hint]- ist **formal**, da $L$ _eindeutig_ definiert ist
> natürliche Sprachen haben Grenzfälle, wo nicht eindeutig ist ob Fall 'korrekt' ist oder nicht

[[Formale Sprachen in Praxis]]
[[Operationen auf Sprachen]]
### Beispiele
- $\set{a, b}^{3} \cup {a}^{*}$ 
	- alle Wörter, die aus genau 3 $a$, 3 $b$ oder nur aus $a$ bestehen
- $L_{1} = \set{w \cdot heit | w \in \Sigma^{*}_{de}}$
	- alle [[Wort|Wörter]] der Deutschen Sprache, die auf "heit" ändern
- $L_{2} = \set{w \in \Sigma^{*}_{bin}\ |\ |w| \geq 2 \land w[|w| - 1] = 1}$ 
	- alle Wörter des [[Binärsystem als Formale Sprache|Binärsystems]], deren vorletzte stelle eine $1$ ist


#### informal
- Namen in einem Telefonbuch
	- endlich
	- eindeutig: alle Namen, die dazu gehören, sind $\in L$
- Telefonnummern in diesem Telefonbuch
- zulässige Bezeichner (?) in [[C]]
- zulässige Programme in [[C]]
- die [[Leere Menge]]
- alle gültige mathematische Sätze ([[Lgk 1.2 Prädikatenlogik.pdf]])
