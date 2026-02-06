> Parameter, die nicht während [[Klassifikatortraining|Training]] angepasst werden können

- Verändern das Verfahren an sich, unabhängig der Daten
- z.B.: Anzahl [[Baum|Bäume]] in einem [[Random Forest]], Kernelparameter einer [[SVM]], Anzahl gewünschter Cluster eines k-Means, Anzahl Schichten eines [[Neural Network]] etc..

> [!hint] Die müssen manuell von Menschen angepasst werden


## Optimierung
- idR durch systematische Tests verschiedener [[Permutation|Kombinationen]] ([[Grid Search]])
	- oder: Bayesian Optimierung
	- anhand eines separaten Validierungsdatensets

> [!hint] Oft eine gute Idee, Hyperparameteroptimierung schon _vor_ dem regulären Traiing machen => spart im Schnitt Zeit.
