> Alternative solution to [[Abstract Class|Abstract Classes]] and Class [[Inheritance]]

- Can be understood as a **Role** of a Class
- one Class can implement multiple interfaces
- Defines only public Methods 

==> Can be used to deal with specific aspects of an [[Object]] without needing to take any extra information about that Object into account

> [!hint] Differentiate Abstract Classes and Interfaces
> - speak: X _is_ Y --> Y is [[Abstract Class]]
> - spek: X _can do_ Y --> Y is [[Interface]]

## in Java
```java
interface IDevice {
	public Processor getProcessor(Processor proc);
}


class Macbook implements IDevice {

}
```
## in UML
--> Arrow should be dotted lol
![[Pasted image 20240507162914.png]]