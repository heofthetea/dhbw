Allows to implement an [[Interface]] without needing to name the [[class]]
(and thus do it neatly inline)
```java
public class OuterClass {
	int num = 42;
	MyInterface myInterface = new MyInterface() {
		@Override
		public int add(int a, int b) {
			return num;
		}
	};
}
```