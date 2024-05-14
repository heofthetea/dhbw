[[Landau Notation]]

1. $f \in O(f)$ 
2. $g \in O(f) \Rightarrow c\cdot g \in O(f)$ _Konstanter Faktor_
3. $g \in O(f) \land h \in O(f) \Rightarrow g+h \in O(f)$ _Summe_
4. $g \in O(f) \land h \in O(g) \Rightarrow h \in O(f)$ _Transitivität_ 
5. $\lim_{n \rightarrow \infty} \frac{g(n)}{f(n)} \in \mathbb{R} \Rightarrow g \in O(f)$ [[Grenzwertbetrachtung in Big O]]
	- _Basically_: Wenn Zähler größer wächst, ist limes nicht existent


> [!warning] 5\. [[Grenzwert]] ist nur _hinreichendes_ Kriterium
> aka: wenn 5. gezeigt ist, reicht es als Beweis aus, aber wenn es falsch ist, muss noch ein anderer Fall überprrüft werden!!

[[Übung Rechenregeln Big O]]
