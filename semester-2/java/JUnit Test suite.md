> A [[Class]] containing [[JUnit]] tests is called a suite.


_Semantically similar_ Testing methods should be grouped in the same class.

```java
public class MitarbeiterTests {
	@Test
	public void testAngestellterGehalt() {
		
	}
}
```

- `@Test` [[Annotation]] Declares a Method as a Test
- Testing Methods get executed in _random order_
- 