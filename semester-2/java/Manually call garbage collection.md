```java
System.gc();
```
Does not _force_ a [[Garbage Collection]] run, but rather politely asks the Garbage Collector whether it would be okay to maybe, if it doesn't bother it, run a garbage collection run.