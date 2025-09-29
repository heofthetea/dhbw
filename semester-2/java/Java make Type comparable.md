1. implement the `comparable` [[Interface]]
2. implement the `public int compareTo(T o)` method
--> This way, Java knows how to compare two Entities and things like `List.sort()` are enabled

### Return
Call: `A.compareTo(B);`
- **< 0**: A < B
- **= 0**: A== B
- **> 0**: A > B

vgl. [[String#strcmp]] 