Comparable to a [[C concepts#Pointer / Address Operators]|Pointer]], but more abstract
- Accesses an Element in the [[Java Heap]] - But not any RAM addresses directly!!!

[[null]] is an _empty_ Reference, comparable to a NullPointer (but _not_ the same!!!)
- is the default when initializing a non-primitive Data Type

### Multiple References to the same Object
using the Example from [[Übung 4 - more UML diagrams]]
```java
OpelAstra oa = new OpelAstra();
Pkw pkw = oa:
```

There's only one [[Object]] in Memory, with two References pointing to the same one

