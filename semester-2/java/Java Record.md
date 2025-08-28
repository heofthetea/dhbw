> easy way to define [[Immutability|immutable]] data

> [!hint] Equivalent to Python Tuple

- does not require a [[Constructor]] or getters/setters

```java
record Message(User sender, User receiver, Body body){}
```

