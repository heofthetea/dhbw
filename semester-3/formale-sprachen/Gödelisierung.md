> Codierung einer [[Turing Machine]]

- Ziel : [[Turing Machine]] so zu codieren, dass man sie einer anderen [[Turing Machine]] $M$ als Eingabe geben kann
- Probleme:
	- $M$ muss **fixes** [[Alphabet]] und **fixe** [[Zustand|Zustandsmenge]] haben
	- $M$ muss als Eingabe **beliebig große** Alphabete und Zustandsmengen verarbeiten können
- Ziel: $M$ simuliert die Berechnungen beliebige uring Machines


## Umsetzung
[[Gödelisierung]] mit [[Alphabet]] $\Sigma_{ab}$ durch [[Unärsystem]]
1. [[Zustand|Zustände]] $\set{q_{1}, q_{2}, q_{3}, ...}$: $\set{a,\ aa,\ aaa...} := g(Q)$
2. [[Alphabet]] $\set{c_{1}, c_{2}, c_{3}, ...}$: $\set{a,\ aa,\ aaa...} := g(\Sigma)$
3. Kopfbewegungen $\set{l, r, n}$: $\set{a, aa, aaa...}$ 
4. [[Übergangsrelation]]: ![[Pasted image 20241113133208.png]]
5. [[Turing Machine|TM als Tupel]]: $g(Q)bbb\,g(\Sigma)bbb\,g(\Gamma)bbb\,g(q_{0})bbb\,g(F)$ 
6. Eingabewort: $g(w) = g(w[1])b\, g(w[2])b...$
7. Konfiguration: $g(vqw) = g(v)bb\, g(q)bb\, g(w)$ 

> [!hint] $b$ fungiert als Trennzeichen

> [!warning] In Literatur findet sich in der Regel die Verwendung des [[Binärsystem|Binären Alphabets]] $\Sigma_{b} = \set{0, 1}$.
## Beispiel
![[Pasted image 20241030154155.png]]

## Codierung des Tupels und Eingabewort

![[Pasted image 20241113132903.png]]