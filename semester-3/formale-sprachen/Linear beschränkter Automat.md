> [[Turing Machine]], deren Band auf die Länge des Eingabe[[Wort|wortes]] $|w|$ beschränkt ist.


- Anstatt ein neues [[Automat|Maschinenmodell]] zu definieren, nimmt man [[Turing Machine]] mit zusätzlichen Start- und End-Marker [[Symbol|Symbolen]]


> [!hint] Erlaubt mehrere Bänder

## Formal
Ein [[Linear beschränkter Automat]] $A$ ist eine [[Turing Machine]] $(Q, \Sigma, \Gamma, \Delta, q_{0}, F)$ mit
- $\set{>, <} \in \Gamma \textbackslash \Sigma$ 
- $\Delta$ diese Marker nur in der Form $(q, >, >, r, q')$ oder $(q, <, <, l, q')$ enthält.
Die von $A$ erkannte [[Sprache]] ist die [[Menge]] aller [[Wort|Wörter]] $w \in \Sigma^{*}$, für die von der Startkonfiguration $>q_{0}w<$ aus eine akzeptierende [[Haltekonfiguration]] erreicht wird.