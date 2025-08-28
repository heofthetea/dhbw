[[Java]], [[Object]]. [[Hash Map]], [[Type Casting]]

```java
public Map<String, Object> toHashMap() throws IllegalAccessException {  
    Map<String, Object> map = new HashMap<>();  
    Field[] fields = this.getClass().getDeclaredFields();  
  
    for (Field field : fields) {  
        Object value = field.get(this);  
        if (value != null) {  
            map.put(field.getName(), value);  
        }  
    }    
    return map;  
}
```