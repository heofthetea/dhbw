My favourite feature which I've never managed to actually use in a way that makes sense lol

- Methods are referenced by the `::` operator
- As in C or python, no parantheses have to be given (different question though: How does that work with [[Method overloading]])

```java
public class MyClass {
	public String compareByLength(String in, String out) {
		return in.length() - out.length();
	}

	public static void main(String[] args) {
		MyClass myObject = new MyClass(args);
		Arrays.sort(args, myObject::compareByLength)
	}
} 
```