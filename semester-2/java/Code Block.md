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
- A non-static block gets executed _once_, when an [[Object]] is created
	- gets executed even _before_ the [[Constructor]]

### Static block
--> [[Java Modifier]]
- gets executed whenever the [[Java Class]] is loaded by the [[JVM]]
	- aka the first time the class is used in any way
```java
class MyClass {
	static {
		System.out.println("Class is loaded");
	}
	public MyClass(){}
}
```

### Synchronized Block
- tell [[Compiler]] to set a [[Synchronisation - Monitor]] for this code

```java
synchronized(v) {
	...
}
```

