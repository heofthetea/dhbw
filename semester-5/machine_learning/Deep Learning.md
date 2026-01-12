---
aliases:
  - Deep Neural Network
---
> [[Neural Network|Neural Networks]], die mindestens zwei [[Hidden Layer]] besitzen

- heutzutage bisschen schwammig -> halt alles was "tief" ist
- [[Merkmal|Merkmale]] werden idR selbst vom Netzwerk extrahiert
	- geht aber auch Merkmalsbasiert

> [!hint] Heutzutage quasi alles lol (Rechenleistung ist billig geworden)

> [!question]- Wieso ist "deep" besser?
> [[Signal|Signale]] haben idR hierarchische Strukturen (z.B. Sample -> Laute -> Worte -> Sätze)
> - Benötigte Schichten/Neuronen skalieren besser:
> 	- bei flachen Netzen müsste jede Abstraktionsebene _in einer Schicht_ gelernt werden
> 	- bei tiefen Netzwerken kann jede Schicth eine Abstraktionssshicht lernen



## Nachteile
- Risiko zu [[Overfitting]]
- Viele Parameter müssen gelernt werden
	- generell rechenintensiv
- Schlecht geeignet für lokale Muster (?) und hierarchisches Lernen von Mustern (??)