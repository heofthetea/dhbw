> easy way to send [[Immutability|immutable]] data

- does not require a [[Constructor]] or getters/setters

```java
record Message(User sender, User receiver, Body body){}
```