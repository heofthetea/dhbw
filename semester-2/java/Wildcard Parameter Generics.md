```java
public void printlist(ArrayList<?> list) {
	for(int i = 0; i < list.getSize(); i ++) {
		Object o = list.elementAt(i);
		System.out.println(o);
	}
}
```

--> can only be used with writing access
Kinda useless, just expect `Object` lol

### Actually useful: every number
```java
public void printNumberList(ArrayList<? extends Number>)
```

also possible with `? super MyClass`
