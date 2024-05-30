[[Lambdas.java]]

For Example: `EventHandler` interface

Acts as a replacement to [[Anonymous Class|Anonymous classes]], for [[Interface|interfaces]] which _only encompass one Method_.

instead of:
```java
button.setOnAction(new EventHandler() {
	@Override
	public void handle(Event event) {
		System.out.println("Hi!")
	}
});
```
one can do a one-liner like so:
```java
button.setOnAction(event -> System.out.println("Hi!"));
```

> [!hint] If a lambda expression uses more than one operation: Use a [[Code Block]], or a [[Method Reference]]

