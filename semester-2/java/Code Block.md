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

### Static block
--> [[Java Modifier]]
- gets executed whenever the [[Class]] is loaded by the [[JVM]]
	- aka the first time the class is used in any way
```java
class MyClass {
	static {
		System.out.println("Class is loaded");
	}
	public MyClass(){}
}
```