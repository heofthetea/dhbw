Enables to write type secure [[Java Class|classes]]

```java
public class MyList<T> {

}
```

- generic Element kann _egal_ welchen Namen haben (aber `T` ist common)
- on Instantiation: When no Data Type is specified, `T` defaults to the `Object` [[Java Class]] -->[[Everything is an Object]]

### Limit Generics with wildcard
[[Wildcard Parameter Generics]]
```java
public class MyList<T extends Number> {}
```
