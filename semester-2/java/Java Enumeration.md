[[Enums.java]]
```java
enum Colour {
	RED, GREEN, BLUE;
}

Colour blue = Colour.BLUE; 
```

> [!warning] The Listing of Elements needs to be the first line of the Array!

- Every instance of the class can only have one of the specified values! --> [[Menge]]
### Constructors in Enumerations
[[Constructor]] darf nur _private_ sein!
--> Verhindert, , dass von außen ein weiteres Enum Element erstellt wird.
```java
enum Colour {
	RED(255, 0, 0), GREEN(0, 255, 0), BLUE(0, 0, 255);

	private int r, g, b;

	Colour(int r, int g, int b) {
		this.r = r;
		this.g = g;
		this.b = b;
	}
}
```
