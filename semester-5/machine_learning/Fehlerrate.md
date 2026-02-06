---
aliases:
  - Error Rate
  - ER
---
> Maß für die Anzahl falsch getroffener Entscheidungen


[[Statistischer Fehler]]


## [[Probabilistische Modelle]]
[[A-priori Wahrscheinlichkeit]]
$$ER = \sum\limits_{i}\sum\limits_{j \neq i} P_{ij} = \sum\limits_{i}\sum\limits_{F_{j}}P(\hat{\omega}=\omega_{i}, \omega = \omega_j)$$
#todo da irgendwas WHAT THE FUCK DIGGA ERKLÄR WENIGSTENS WAS DEINE SCHEISS VARIABLEN SIND DIGGA

## [[Klassifikator|Klassifikatoren]]
$$ER = \frac{n_{ij}}{N}\quad,i \neq j$$
- wo:
	- $n_{ij}$ - Anzahl der Datenpunkte aus Klasse j, die fälschlicherweise als Klasse $i$ klassifiziert wurden
	- $N$: [[Grundgesamtheit]] der Datenpunkte