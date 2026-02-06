> Allgemeine Form von [[Likelihood]] $p(x|\omega_{j})$ für manche Aufgabenstellungen (z.B. [[Normalverteilung]]) bekannt

=> [[Schätzer|Schätze]] Parameter $\nu_{j}$ der Verteilung und füge sie in [[Likelihood]] $p(x|\omega_{j})$ ein:

$$p(x|(\omega_{j}, \nu_{j}))$$
ermöglicht Anwendung von [[MBR Klassifikator]]

> [!hint] Das ist das **Plugin** -> man pluggt $\nu_{j}$ in den Hintern der [[Likelihood]]

### Training
schätze $\nu_{j}$ und $p(\omega_{j})$ aus [[Stichprobe|Trainingssamples]] von Klasse $\omega_{j}$

### Klassifikation
Nutze $p(x|\omega_{j}, \hat{\nu_{j}})$ und $\hat{p}_{j}$ in Methoden eines [[Entscheidungstheoretischer Klassifikator]]
## Brain Rot
![[Pasted image 20251031143542.png]]