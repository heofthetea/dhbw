> Idee: [[False Positive]] Rate soll unterhalb eines festgelegten [[Grenzwert]] $\alpha$ liegen.

- bekannt: [[Likelihood]]
- unbekannt: [[A-priori Wahrscheinlichkeit]], [[Loss]]

$$\begin{bmatrix}1 - P_{FP} & 1 - P_{D} \\ P_{FP} & P_{D}\end{bmatrix}$$


## Vorgehene
1. maximiere Detection Rate $P_{D}$ unter der Nebenbedingung so dass $P_{FP} \leq \alpha$
2. Durchführung eines [[Likelihood Ratio Test]] mit einem von $\alpha$ abhängigen [[Grenzwert]] $\gamma(\alpha)$
