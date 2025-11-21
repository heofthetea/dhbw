---
aliases:
  - SVM
---
[[Klassifikator]], [[Überwachtes Lernverfahren]], [[Diskriminanzfunktion]]

- Aufgabe: Möglichst gut trennende [[Ebene]] finden
- **support Vector** -> [[Vektor]] zu einem Punkt am am Rand der Margin
	- Margin = Buffer zone um die [[Entscheidungsgrenze]]
- Bricht $c$-[[Klasse|Klassenproblem]] immer runter auf mehrere 2-dimensionale Probleme

> [!definition]- Bild Support Vector
> ![[Pasted image 20251110091357.png]]

> [!hint] [[Ebene]] ist eine [[Entscheidungsgrenze]] im $n$-[[Dimension|dimensionalen]] Raum

## Entscheidung
[[Diskriminanzfunktion]]:
$$f_{j}(x) = w_{j}^{t}x + w_{j_{0}}$$
- $w_{j} \in \mathbb{R}^d$: Gewichts-[[Vektor]]
- $w_{j_{0}} \in \mathbb{R}$: Offset

### 2-Klassen-Problem:
$$f(x) = f_{1}(x) - f_{2}(x) =  (w_{1} - w_{2})^{t}x + (w_{1_{0}} - w_{2_{0}}) \gt 0$$

[[Entscheidungsgrenze]] $\beta_{12}$: $f(x) = 0$

> [!hint]- [[Dimension|Dimensionalität]] von $\beta$: $d_{\beta} = d - 1$
>  also im zwei-dimensionalen ist es nur eine Linie, bei 3 ist es eine Ebene


- Beschriebung der Hyperebene:
	- Lage in $\mathbb{R}^{d}$: durch $w_{0}$
	- Orientierung: durch orthogonales $\vec{w}$
![[Pasted image 20251121130912.png]]

### Entscheidungsregel
$$f(x) > 0 \Longrightarrow x \in R_{1} \Longrightarrow \hat{y}(x) = \omega_{1}$$
$$f(x) \lt 0 \Longrightarrow x \in R_{2} \Longrightarrow \hat{y}(x) = \omega_{2}$$
Berechnung über [[Norm eines Vektors|Distanz]]:
$$d(x) = \frac{f(x)}{||w||} = \begin{cases} \lt 0 && f. x \in R_{1} \\ = 0 && f. x \in \beta_{12} \\ \gt 0 && f. x \in R_{2}\end{cases}$$


## [[Hyperparameter]]
- **gamma** -> Wie ausschlaggebend wird ein einzelner Punkt?
	- je größer, desto likelier zu [[Overfitting]]
- **kernel** -> Welchen [[SVM Kernel]] man benutzt
- **cost**  $C$-> Wie viele Punkte um die Entscheidungsgrenze herum werden angeschaut -> [[Soft-Margin SVM]]

> [!hint]- Bildliche Darstellung für $\gamma$-based Overfitting:
> ![[Pasted image 20251121143640.png]]

## Vorteile
- kann gut komplexe **nicht-lineare** Entscheidungsebenen
- Setzt keine Verteilung voraus -> [[NIcht-parametrisches Verfahren]]

## Nachteile
- relativ rechenaufwendig (aber weniger als NN)