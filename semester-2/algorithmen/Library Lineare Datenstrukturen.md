#library 
> [[Liste|Verkettete Listen]] und [[Array|Arrays]] heißen lineare Datenstrukturen, weil sie Elemente hintereinander (=linear) speichern.

## Array
- [[Array|Arrays]] liegen im [[Arrays im Speicher|Speicher]] als basically _ein großer Block_ vor
	--> Can lead to cluttering and potentially free space not being utilized
	- Unterscheidung zwischen [[Row-major Array-Speicher|row-major]] und column-major Speicher:
		- [[Row-major Array-Speicher|row-major]]: 
- [[Random Access auf Arrays]] in [[Konstante Laufzeit|konstanter Laufzeit]] gegeben durch [[Pointer#Pointer arithmetic|Pointer Arithmetic]]:
	- $a_{i} = a_{0} + i \cdot s$, wo $i$ der gewollte Index, $a_{0}$ das erste Elemtent und $s$ die Bytegröße jedes Eintrags
- [[Use cases of Arrays]]:
	- Als primäre Datenstruktur nur sinnvoll, wenn gespeicherte Daten <span style="color:rgb(245, 154, 35)">weitestgehend statisch</span> und <span style="color:rgb(245, 154, 35)">klein</span> sind
	- Grundlage für weitere Datenstrukturen:
		1. [[Dynamic Array]] (resize [[Array]] when it's full)
		2. [[Heap]]
		3. [[Stack]]
## Liste
> [!def] [[Recursion|Rekursive]] Definition:
> Die [[Leere Liste]] ist eine [[Liste]]. Ein [[Knoten]], dessen Nachfolger eine [[Liste]] ist, ist auch eine [[Liste]].

<span style="color:rgb(126, 198, 54)">Etwas Praxisorientierter</span>: eine [[Liste]] ist charakterisiert durch ihren ersten Knoten ([[Head]]). Jeder Knoten verlinkt dabei auf seinen Nachfolger. Das Ende der Liste ist erreicht, wenn der [[Pointer]] zum Nachfolger ins [[null|Nichts]] zeigt. 

---
- jeder neue [[Knoten]] (= Element) einer [[Liste]] kann irgendwo in den Speicher geworfen werden, wo grade Platz ist
	- jeder [[Knoten]] kennt entweder
		1. seinen Nachfolger --> [[Singly Linked List]]
		2. seinen Nachfolger _und_ Vorgänger --> [[Doubly Linked List]]
	- Dadurch ist Länge der [[Liste]] höchst dynamisch, und [[Payload]] der [[Knoten]] kann von verschiedenen Datentypen sein (-> [[Heterogene Liste]])
> [!hint] Umgehen mit Edge Cases bei Einfügen/Entfernen
> Normalerweise müssen 3 Fälle betrachtet werden: (see [[Delete Node]]). Das kann behoben werden, indem der [[Listenanker]] ein Dummy-Knoten ist auf den der [[Tail]] verweist, um eine [[circular List]] zu erzeugen. --> [[Zyklische Verankerung Doubly Linked List]]

- [[Doubly vs Singly linked List]]: [[Doubly Linked List]] erleichtert das Arbeiten (Einfügen, [[Iteration]]) vom Ende der Liste, anonsten ziemlich gleich lol
- Erkennen von [[circular List]] mit Algorithmus von Hase und Igel:
	- ein [[Pointer]] läft immer zwei Elemente der Liste entlang (<span style="color:rgb(245, 154, 35)">Hase</span>)
	- der andere immer eins (<span style="color:rgb(0, 122, 255)">Igel</span>)
	- wenn <span style="color:rgb(0, 122, 255)">Igel</span> den <span style="color:rgb(245, 154, 35)">Hasen</span> einholt, hat Lise einen Zyklus
## Liste vs. Array
[[Liste vs Array]]

- [[Array]]:
	- [[Random Access auf Arrays|Random Access]] in [[Konstante Laufzeit|konstanter Laufzeit]]
	- ermöglicht [[Binary Search]], wenn Daten sortiert sind
		--> <span style="color:rgb(245, 154, 35)"> Bei sortierten Datensätzen immer Arrays verwenden!!</span>
	- dafür unflexibel und schlecht skalierend
- [[Liste]]:
	- Dynamische Länge, deutlich flexibler im Speicher
	- einfaches einfügen und entfernen von Elementen
	- durch rekursiven Aufbau aber Random access in nur [[lineare Laufzeit]]
	- [[Binary Search]] funktioniert nicht, weil man bereits $\Theta(n)$ benötigt, um zum Pivon zu kommen