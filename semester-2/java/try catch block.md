```java
try {
	doStuff();
} catch (MyException e) {
	handleMyException();

} catch (AnotherException ae) {
	throw e;
} catch (Exception e) {
	e.printStackTrace();
```
- Catch blocks get processed from top to bottom

Similar to [[switch-case]]
- extended: [[Try with resources]]
### What a catch can be used for
- print the stack trace
- [[Throw Exceptions|throw exception]] one instance higher
	- is not recommended, as it might cause difficult-to-debug bugs
- Actually handle the exception