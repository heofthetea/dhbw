(appearantly also a feature of C)
```java
class MyClass {
	{
		// this is a code block
		String myString = "hello world";
	}
	int attribute = 42;

}
```
Variables declared inside of the [[Code Block]] cannot be accessed from outside the code block

- however, (contrary to C), inside the code block, no existing variable identifier can be overwritten

> use case?