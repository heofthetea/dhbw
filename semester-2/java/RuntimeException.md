Does not need to be caught!!
`IndexOutOfBoundsException` is a Runtime Exception

### wrap regular Exception in runtime exception
```java
try {

} catch (Exception e) {
	throw new RuntimeException(e)
}
```