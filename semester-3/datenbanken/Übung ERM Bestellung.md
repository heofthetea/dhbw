[[ERM]]

1. Jeder Kunde besitzt genau eine Anschrift.
2. Jeder Kunde darf beliebig viele Bestellungen machen. Aber zu einer Bestellung existiert genau ein Kunde.
3. In jedem Bereich gibt es mehrere Vertriebsmitarbeiter, aber jeder ist nur für einen Bereich zuständig.
4. In jedem Bereich können verschiedene Produkte bestellt werden, aber jedes Produkt ist genau einem Bereich zugeordnet.
5. Werden bei einer Bestellung verschiedene Produkte in verschiedenen Bereichen bestellt, so sind mehrere Vertriebsmitarbeiter involviert. Aber für alle Produkte einer Bestellung aus einem Bereich ist genau ein Vertriebsmitarbeiter zuständig.



## Musterlösung
_zusätzliche_ [[n-stellige Relationship|ternäre Relationship]], um Sonderbedingung erfüllen

$$Bestellung \times Bereich \rightarrow Vertriebsperson$$

![[Pasted image 20241022140504.png]]

## Versuch 1 (falsch)
> [!warning] Problem: letzter Satz aus 5. ist nicht gegeben. 

![[Pasted image 20241022135410.png]]
