> Bitmuster, dass auf [[Interrupt]]-Bus gelegt wird
> Beschreibt Ziel-[[Adresse]] einer Interrupt Routine


- Für [[Nummer-Interrupt]]:
	- Vektornummer $nnn$ ist in Bitmuster $11nn\,n111$ codiert 
		- $\in [0, 7]$ 
	- Interpretation: Ziel-[[Adresse]] ist $8 \cdot nnn$
- Für [[Vektor-Interrupt]]:
	- Vektornummer ist ganzes $8$-Bit Muster:
		- $256$ mögliche Werte
	- Interpretation: Ziel-[[Adresse]] ist $4 \cdot v$
