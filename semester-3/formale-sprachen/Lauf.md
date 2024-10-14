> Ein Durchlauf durch einen [[Automat]].

- Ein Eingabewort wird [[Symbol]] für [[Symbol]] eingelesen
- mit jedem [[Symbol]] wird ein neuer [[Zustand]] erreicht

## Formal
- eine [[Konfiguration KA|Konfiguration]] von $\mathcal{A}$ ist ein Paar $(q, w)$ mit $q \in Q$ und $w \in \Sigma^{*}$
- Ein **Lauf** von $\mathcal{A}$ auf einem [[Wort]] $w = c_{1}\cdot c_{2}\cdot ...$ ist eine [[Folge]] von Konfigurationen:
$$((q_{0}, c_{0}...c_{n}),(q_{1}, c_{1}...c_{n}), ...(q_{n}, \epsilon))$$
- sodass für alle $1 \leq i \leq n$ gilt: $\delta(q_{i-1}, c_{i}) = q_{i}$
- ein **Lauf** heißt _akzeptierend_, wenn $q_{n} \in F$ gilt, sonst heißt er _verwerfend_.

## Auf [[NFA]]
 Hier ist ein [[Lauf]] von $\mathcal{A}$ auf einem [[Wort]] $w_{0} \in \Sigma ^{*}$ eine [[Folge]] von [[Konfiguration KA|Konfigurationen]] 
$$l = (q_{0}, w_{0}, (q_{1}, w_{1}), ..., (q_{m}, \epsilon))$$
sodass für alle [[Tupel|Paare]] aus Konfigurationen $(q_{i}, w_{i}), (q_{i+1}, w_{i+1}) \in l$ gilt:
1. Es gibt einen [[Übergangsrelation|Übergang]] $(q_{i}, c q_{i+1}) \in \Delta$ mit
2. $w_{i} = c\cdot w_{i+1}$

Ein [[Lauf]] ist **akzeptierend**, wenn $q_{m}$ ein [[Endzustand]] ist.

> [!hint] Für [[Kellerautomat]] genau so definiert, mit Rücksicht auf den [[Stack]].
> Der [[Lauf]] akzeptiert also, wenn der [[Stack]] leer bei [[Zustand]] $q_{m}$ leer ist.



