> [[Kontextfreie Sprache|Kontextfreie Sprachen]] sind abgeschlossen unter Vereinigung, [[Operationen auf Sprachen#Produkt|Konkatenation]] und [[Klenee-Stern]]

[[Operationen auf Sprachen]], [[Operationen auf Mengen]]

seien $S_{0}$ das [[Startsymbol]] von $L_{0}$ und $S_{1}$ das von $L_{1}$

## Vereinigung

1. neues [[Startsymbol]] $S$
2. neue [[Produktionsregel|Regeln]] $S \rightarrow S_{0}|S_{1}$

## Konkatenation

1. neues [[Startsymbol]] $S$
2. neue [[Produktionsregel|Regel]] $S \rightarrow S_{0}|S_{1}$

## Klenee-Stern

1. neues [[Startsymbol]] $S$
2. neue [[Produktionsregel|Regel]] $S \rightarrow \epsilon|S_{1}S$

## Durchschnitt

> [!hint] [[Produktautomat]] geht nicht, weil man nur **einen** [[Stack]] hat

- ist nicht Abgeschlossen lol

## Komplement

- ist nicht abgeschlossen.
- Gegenbeispiel: Doppelte Wörter ([[Beispiel 3.51 Pumping Lemma 2]])
  - Komplement davon ist [[Kontextfreie Sprache|kontextfrei]]
  - Die [[Sprache]] an sich aber nicht
  - $\overline{\overline{L_{D}}}=L_{D}$ ist nicht [[Kontextfreie Sprache|kontextfrei]]

### Proof

$$\overline{L_{1} \cup L_{2}} = \overline{L_{1}} \cap \overline{L_{2}}$$
Schnitt ist nicht abgeschlossen --> $\overline{L_{1}\cup L_{2}}$ muss nicht regulär sein
