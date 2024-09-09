```java
static void doSomething() throws IOException {
	throw new IOException("I love Hanh");
}
```

--> Useful, as this will also pring [[fully qualified Classname]], Stack trace etc. etc., instead of just doing nothing