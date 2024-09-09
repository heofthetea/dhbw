```c
MyList.stream()
	.doStuff()
	.collect(Collectors.toList())
```

Converts a [[Java Stream|Stream]]/[[Java Collections|Collection]] back into some regular Data Type. 
Occasionally (e.g. for `Collectors.toMap(key, value)`), [[Lambda expressions|Expressions]] are required to be passed into the collector. 