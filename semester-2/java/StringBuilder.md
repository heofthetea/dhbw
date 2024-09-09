**Problem**: folgender Code erzeugt nen Haufen Müll, den die [[Garbage Collection]] aufräumen muss

```java
String myString = "";
for (int i = 0; i < 10, i ++) {
	myString += i;
}
```

StringBuilder ist ein [[Builder]] Concept:
The usual stuff: Append to an intermediate result

```java
StringBuilder builder = "";
for (int i = 0; i < 10, i ++) {
	builder.append(i);
}
builder.toString();
```

> [!hint] In newer Compiler versions, this is done automatically during compilation!
> The first example will appear as StringBuilder in Bytecode.

