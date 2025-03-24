> oder: "Verbundtreue Zerlegung"
> Man kann jede [[Instanz einer Relation|Instanz]] der ausgangsrelation genau so in den neuen Relationen wiederspiegeln.

[[Operationen auf Mengen#Intersection|Durschschnitt]], [[Gültige Zerlegung]]


- Wenn **für alle [[Instanz einer Relation|Instanzen]]** von $R$ gilt:
$$R_{1} \Join R_{2} = R$$
> [!info] Wenn ich die [[Instanz einer Relation|Instanzen]] der beiden neuen [[Relation|Relationen]] (z.B. durch ein [[SQL join|join]]) zusammenfüge, ist die [[Instanz einer Relation|Instanz]] genau gleich wie die der ursprünglichen [[Relation]]. Es gehen keine [[Tupel]] verloren, und es kommen keine hinzu.

#### Formal
formale Prüfung auf Verlustlosigkeit ([[Hülle einer funktionalen Abhängigkeit|Hülle]]):
$$[R_{1}] \cap [R_{2}] \rightarrow [R_{1}] \in F^{+}$$
- **oder**:
$$[R_{1}] \cap [R_{2}] \rightarrow [R_{2}] \in F^{+}$$
> [!hint] Bildet der [[Operationen auf Mengen#Intersection|Schnitt]] der Relationen (= der [[Fremdschlüssel]]) auf eine der [[Relation|Relationen]] ab?

> [!hint] Ist möglich bis hoch zur [[4NF]].

