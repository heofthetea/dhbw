[[Schlüssel]], [[Attribut]], [[Beispiel Schlüssel Fahrzeug]]

- Ein [[Schlüsselattribut]] definiert eine [[Entität]] _exakt_. Ein [[Schlüsselattribut]] ist demnach _eindeutig_
- Ein [[Schlüsselattribut]] kann eine Kombination aus [[Attribut|Attributen]] sein.
- ist im [[ERM]] _unterstrichen_, um es kenntlich zu machen


![[Pasted image 20240917151756.png]]
## Anforderungen
- darf nicht [[null]] sein
- darf sich zukünftig nicht ändern (<span style="color:rgb(245, 154, 35)">Zeit-Invarianz</span>)

> [!hint] just slap a [[UUID]] on everything --> "Künstlicher Schlüssel" lol

> [!warning] Wenn es ein [[Attribut]] gibt, dass sich von Natur aus anbietet, sollte man das nehmen.
> _die meisten_ Schlüssel sind künstlich, aber nicht alle!