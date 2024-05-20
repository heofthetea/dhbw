> `==` compares two [[Object|Objects]] on whether their [[Reference]] matches

- Two different Objects with the exact same content are not equal by reference

### Strings as exception
When the compiler detects 2 different strings in a normal assignment, it will use the same memory for them.

```java
String a = "hello";
String b = "hello";
```