> [[switch-case]] als [[Funktion]]

vgl. [[Rust Pattern Matching]]

```java
var result = switch(month) {
    case JANUARY, JUNE, JULY -> 3;
    case FEBRUARY, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER -> 1;
    case MARCH, MAY, APRIL, AUGUST -> 2;
    default -> 0; 
}; 
```

> [!hint] ist das pendant zu [[Optional]]

