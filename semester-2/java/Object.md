## OOP
An [[Object]] is a [[Tupel|Tuplet]] defined by two sets: the [[Menge|set]] of its [[Attribut|Attributes]] $A$, and the set of its [[Methode|methods]] $M$.
$$O = ({A}, {M})$$
where each [[Attribut]] is a key-value pair:
$$a = (k: v) \in A$$
and each [[Methode|method]] $m \in M$ is an impure [[function]]: 
$$m: X \longrightarrow Y$$

The [[Schema einer Relation|scheme]] $(A, M)$ is defined by the object's [[Java Class]], where the only thing differing among [[Object|objects]] of the same [[Java Class]] is the set of their values $v$.

## [[Category]] Theory
> An abstract entity serving as source and target to Morphisms

- Here: The [[Methode|methods]] are outgoing [[Morphism|morphisms]]
	- the attributes are just data inside this black box
(yes it's clunky and shits on purity but idfc I need to somehow justify plopping these two defintions into one file)

## informal
An instance of a [[Java Class]]
Each Object is accessed through a [[Reference]]

- An Object is created via the `new` keyword
- whenever a new Object gets created, it is placed in the [[Program Heap]]
- new Objects are created with a [[Constructor]]


[[String representation of an Object]]
