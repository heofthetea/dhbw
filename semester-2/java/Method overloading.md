Have multiple methods with the same _name_, however different [[Function Signature|signatures]] (at least the arguments need to be different, but the return type _can_ also differ)
```java
public int add(int a, int b) {
	return a + b;
}


public int add(double a, double b) {
	return (int) a + b;
}
```