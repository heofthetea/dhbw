> Extrapolation aus bekanntem Zusammenhang

[[Abbildung|Funktion]], [[Linearkombination]]
$$X \longrightarrow Y$$
$$Y(x) = a + bx + u$$

- $u$ ist der erlaubte Fehler: $u \subset Y$, der durch den [[Funktionale Abhängigkeit|funktionelen Zusammenhang]] nicht erklärt wird.

> [!hint]- Ziel: $u^{2}$ minimieren.
> Warum quadrieren? Damit sich positive und negative Fehler nicht gegenseitig kürzen -> least squares

$$f(a, b) = \sum\limits u_{i} = \sum\limits(\hat{y_{i}} - y_{i}) = \sum\limits(a+bx_{i} - y_{i})$$

## Minimierung

- Kleinste-Quadrat-Schätzer (KQ-Schätzer)

> [!warning]- $Y$ und $X$ müssen richtig aus dem [[Kontext]] gewählt sein -> $Y$ in Abhängigkeit von $X$.
>
> - $Y$ soll durch $X$ erklärt werden.

#klausurrelevant
[[Kovarianz]], [[Arithmetisches Mittel]], [[Varianz]]
$$\hat{b} = \frac{cov(x,y)}{s_{x}^{2}}$$
$$\hat{a} = \overline{y} - \hat{b}\cdot\overline{x}$$

> [!hint] das \hat $\hat{a}$ bedeutet "[[Schätzung]] von $a$".

## Relevanz

- braucht wenig Datenpunkte für decent Resultate
  - => very useful yk
