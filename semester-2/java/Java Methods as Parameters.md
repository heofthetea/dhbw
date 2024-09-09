[[Lambda expressions]], [[Java Generics]], [[Interface]]
```java
private static interface SearchOp {  
    <T> T search();  
}  

public <T> T getElementByAttribute(SearchOp search){  
    T t = search.search();  
  
    return t;  
}
```