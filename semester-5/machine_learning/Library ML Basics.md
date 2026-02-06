## Signalverarbeitung
```mermaid
flowchart LR
	Signal --> Sensor --> Cömpütér --> Output
```

- [[Deterministisches Signal]]: Kann vollständig von mathematischem Modell beschrieben werden
	- => exakte Vorhersage (vgl. [[Parametrisches Verfahren]])
	- => ermöglicht [[Modellbasierte Signalverarbeitung]]
- [[Stochastisches Signal]]: Kann <span style="color:rgb(245, 154, 35)">nicht</span> von mathematischem Modell beschrieben werden
	- => keine exakte Vorhersage möglich (vgl. [[NIcht-parametrisches Verfahren]])
	- => Benötigt [[Lernbasierte Signalverarbeitung]]
- [[Mustererkennung vs. Detektion]]:
	- **Detektion**: ist da etwas? (-> [[Boolsche Menge|binäre]] Entscheidung)
	- **Mustererkennung**: was ist das?

> [!hint] In Praxis oft zusammengewürfelt: "Ist da etwas? Wenn ja, was?"

## Hierarchie [[ML Buzzwords]]
$$KI \supset ML \supset NN \supset DL$$
- wo: 
	- $KI =$ [[Künstliche Intelligenz]]
	- $ML =$ [[Machine Learning]]
	- $NN =$ [[Neural Network]]
	- $DL =$ [[Deep Learning]]
- Starke vs. Schwache KI:
	- [[Schwache KI]]: Eingeschränkt auf ein Fachgebiet (bsp. Schachbot)
	- [[Starke KI]] ~ AGI, eine [[Künstliche Intelligenz]] die alles kann

# Meth
- general stuff [[Standardabweichung]] [[Arithmetisches Mittel|Mittelwert]] -> [[Library Statistik]]
### Korrelation
- [[Korrelation]]: Der Zusammenhang zwischen zwei [[Merkmal|Merkmalen]] $X$ und $Y$
	- Korrelation != Kausalität the usual
- [[Korrelationskoeffizient]] nach Pearson:
	- Nur geeignet für [[Gerade|lineare]] Zusammenhänge
	- $-1 \leq R^{2} \leq 1$

#### Rankorrelation
- [[Rangkorrelationen]]
- Alternative zu [[Korrelationskoeffizient|Pearson]] -> kann [[Exponentialfunktion|exponentiale]] [[Korrelation|Korrelationen]] darstellen

> [!hint] Idee: Beide [[Merkmal|Merkmale]] [[Ordnungsrelation|ordnen]] -> dann paarweise Vergleichen


#todo Faltung