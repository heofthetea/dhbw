[[Pumping Lemma]], [[Kontraposition Pumping Lemma]]
## Allgemeines Vorgehen
1. Finde ein [[Wort]] $s$ abhängig von der Mindestlänge $k$.
2. Zerlege $s$ in $u \cdot v \cdot w$. Achte auf $|u \cdot v| \leq k$
3. Wähle ein richtiges $h$.
4. Zeige, dass $u \cdot v^{h} \cdot w \not\in L$ gilt.


## Beispiel
![[Pasted image 20241002134907.png]]
- Wort muss _mindestens_ $k$ Zeichen lang sein --> $a^{k}b^{k}$ ist bequem
	- aber: man hat Freiheiten
- $v$ liegt komplett in $a$-Block, _weil_ $|uv| \leq k$ 
- vorletzte Zeile: $i + j + l =k \land j \geq 1 \Longrightarrow i + l \lt k$ 