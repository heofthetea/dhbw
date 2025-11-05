> Multiple Methods with the same Name, but different Parameters.
## Overloading
- Multiple Methods with same _Name_ within the same [[Java Class]]

## Overriding
- Change Implementation of [[Inheritance|inherited]] Method
- [[Function Signature]] has to be identical
	- Exception: [[Visibility]] can be made less strict
		- protected Method made Public
- Uses the `@Override` [[Annotation]]
- 

#### Example: [[Square.java]]
```java
@Override
public void setWidth(double width) {
	super.setWidth(width);
	super.setHeight(width);
}
```