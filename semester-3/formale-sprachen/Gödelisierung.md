> Codierung einer [[Turing Machine]]

- Ziel : [[Turing Machine]] so zu codieren, dass man sie einer anderen [[Turing Machine]] $M$ als Eingabe geben kann
- Probleme:
	- $M$ muss **fixes** [[Alphabet]] und **fixe** [[Zustand|Zustandsmenge]] haben
	- $M$ muss als Eingabe **beliebig große** Alphabete und Zustandsmengen verarbeiten können
- Ziel: $M$ simuliert die Berechnungen beliebige uring Machines


## Umsetzung
[[Gödelisierung]] mit [[Alphabet]] $\Sigma_{ab}$ durch [[Unärsystem]]
1. [[Zustand|Zustände]] $\set{q_{1}, q_{2}, q_{3}, ...}$: $a,\ aa,\ aaa$
2. [[Alphabet]] $\set{c_{1}, c_{2}, c_{3}, ...}$: $a,\ aa,\ aaa...$
3. Kopfbewegungen $\set{l, r, n}$: $a, aa, aaa...$

> [!hint] $b$ fungiert als Trennzeichen


## Beispiel
![[Pasted image 20241030154155.png]]