> Zur Lösung der Gleichungssysteme aus [[Transformation DFA -> Regex]]

[[leeres Wort]], [[Klenee-Stern]], [[Regulärer Ausdruck]], [[Rekurrenzrelation]]


Seien $r,\ s$ und $t$ [[Regulärer Ausdruck|reguläre Ausdrücke]] und gelte:
- $\epsilon \not\in \mathcal{L}(s)$ 
- $r \equiv sr + t$
Dann gilt: $$r \equiv s^{*}t$$

## Intuition
- Jedes Wort aus $\mathcal{L}(t)$ gehört zu $\mathcal{L}(r)$
- Man kann jedem Wort aus $\mathcal{L}(r)$ ein Wort aus $\mathcal{L}(s)$ voranstellen und bleibt in $\mathcal{L}(r)$ 
	- wegen dem $r \equiv sr$ 
==> Jedes [[Wort]] aus $\mathcal{L}(r)$ besteht aus beliebig vielen [[Konkatenation|Konkatenationen]] aus $\mathcal{L}(s)$, gefolgt von einem Wort aus $\mathcal{L}(t)$