**Problem**: Eine Klasse muss immer _alle_ Methoden eines Interfaces implementieren -> Wenn sich am Interface was ändert, muss jede Implementierung geändert werden

**Solution**: default implementations allow for fully quallified Java Code to be specified as the default implementation for a Method defined in an interface

```java
interface MyInterface {
	default int add(int a, int b) {
		return a + b;
	}
}
```