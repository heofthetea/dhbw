see also: [[Node (doubly linked list)]]
ein _Element_ einer [[Liste]] oder eines [[Graph|Graphen]]

### Bestandteile
1. seine Addresse (charakterisiert jeden Knoten)
2. [[Payload]] - Die Daten, die im Knoten tatsächlich gespeichert sind
3. [[Pointer]] auf Nachvolger (und evt. Vorgänger)

```c
typedef struct Node {
	Node *next;
	Object *payload;
} Node;
```
## auf [[Graph]]
[[Menge]] der [[Knoten]]: $V$ (vertices)

### Graphdatenbanken
- Jeder [[Knoten]] ist eine [[Entität]]
- besitzt ein Label (= Entitätstyp) - hier gelb
	- besitzt mehrere [[Attribut|Attribute]]

![[Pasted image 20241026141839.png|400]]