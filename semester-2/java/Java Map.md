> Maps a [[Key]] to a Value

Is essentially a [[Dictionary]]

- offer [[Random Access auf Arrays|random access]] in [[Konstante Laufzeit|constant time]] similar to [[Array|Arrays]]

[[Everything is an Object]], [[Java Generics]]
```java
Map<String, Object> myMap = new Map<>();
myMap.put("object 1", new Object())
```

--> The keys of a [[Java Map|Map]] are a [[Menge|Set]] - each [[Key]] can only exist once, so when trying to add a new element with an existing key, the previoius element will be overwriten 