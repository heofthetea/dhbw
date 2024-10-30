
0. Gegeben sei $\int \frac{1}{a + x^{2}}$ 
1. Extrahiere $\frac{1}{a}$
$$= \frac{1}{a} \int \frac{1}{\frac{x^{2}}{a} + 1}$$
2. Gewalt
$$= \frac{1}{a} \int \frac{1}{(\frac{x}{\sqrt{a}})^{2} + 1}$$
3. Nutze Pseudo-[[Substitution Integral|Substitution]], um irgendeine integrierbare Form (welche? kp) zu erreichen
	1. Finde [[Ableitung]] von dem Ding, was quadriert wird
	2. schreibe die oben hin
	3. korrigiere vor dem Integral
$$= \frac{1}{a}\cdot \sqrt{a} \cdot \int \frac{\frac{1}{\sqrt{a}}}{(\frac{x}{\sqrt{a}})^{2} + 1}$$
4. Triviale Integration

$$= \frac{\sqrt{a}}{a} \cdot arctan\left(\frac{x}{\sqrt{a}}\right)$$
