[[Turing Machine]], [[Determinismus]], [[Komplexität von Problemen]]

$$TIME(f) = \set{L\ |\ \exists_{DTM}\ mit\ L(DTM) =L}$$
$$NTIME(f) = \set{L\ |\ \exists_{NTM}\ mit\ L(NTM) =L}$$

> [!warning] Hierbei müssen die [[Turing Machine|TMs]] [[Komplexität|f-zeitbeschränkt]] sein. (daher das $f$ in der Klasse)

> [!hint] Es gilt: $TIME(f) \subset NTIME(f)$