Chaining constructors essentially refers to calling another constructor from the current constructor.
> [!hint] Constructors are **always** chained!!
> Either explicitly as shown below, or a chain call to the Parent Class's constructor. If no chaining is _explicitly_ specified, a call to the parent's _default Constructor_ is placed.


--> Calling the Parent class constructor via `super()` is part of this concept!!


```java
public Constructor(int a) {
	this.a = a;
}

public Constructor(int a, int b) {
	this(a);
	this.b = b;
}
```