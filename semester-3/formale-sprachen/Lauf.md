> Ein Durchlauf durch einen [[Automat]].

- Ein Eingabewort wird [[Symbol]] für [[Symbol]] eingelesen
- mit jedem [[Symbol]] wird ein neuer [[Zustand]] erreicht

## Formal
- eine **Konfiguration** von $\mathcal{A}$ ist ein Paar $(q, w)$ mit $q \in Q$ und $w \in \Sigma^{*}$
- Ein **Lauf** von $\mathcal{A}$ auf einem [[Wort]] $w = c_{1}\cdot c_{2}\cdot ...$ ist eine [[Folge]] von Konfigurationen:
$$((q_{0}, c_{0}...c_{n}),(q_{1}, c_{1}...c_{n}), ...(q_{n}, \epsilon))$$
... #todo
- ein **Lauf** heißt _akzeptierend_, wenn $q_{n} \in F$ gilt, sonst heißt er _verwerfend_.

## Auf [[NFA]]
![[Pasted image 20240918151756.png]]