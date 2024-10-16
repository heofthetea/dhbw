Eine [[Relation]] über dem [[Zustand|Zustandsmenge]], dem [[Alphabet]] vereinigt mit dem [[leeres Wort|leeren Wort]]

$$\Delta = Q \times (\Sigma \cup \set{\epsilon}) \times Q$$

> [!warning] Reihenfolge der [[Menge|Mengen]] ist wichtig!
> Kann von links nach rechts gelesen werden: $0, a, 1 \leadsto$ "Von $0$ mit $a$ nach $1$"

### Kellerautomaten
[[Kellerautomat]]

$$\Delta \subset Q \times \Sigma \cup \set{\epsilon} \times \Gamma \times \Gamma^{*} \times Q$$
(Zustand von; Eingabe lesen, Stack lesen, Stack schreiben, Zustand zu)

> [!hint]- Beschriftung der Pfeile in [[Zustandsdiagramm]] steht in der richtigen Reihenfolge des Tupels

## Beispiel
![[Pasted image 20240918152118.png]]