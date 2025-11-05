Enables to create a [[Java Class]] inside of another [[Java Class]].

### regular inner class
- `InnerClass` can access Attributes of `OuterClass`
- In this case: `InnerClass` cannot be accessed from outside the `OuterClass` 
```java
public class OuterClass {
	private class InnerClass{
		// do stuff
	}
}
```

#### static Inner Class
[[static modifier]]
Behaves like a regular class, except:
Cannot be accessed, or access, attributes in a non-static context.
--> Needs outer class name as prefix

```java
new InnerClass(); // not possible
new OuterClass.InnerClass(); // is possible
```
#### Resolve naming conflicts
[[Java Scopes]]
```java
OuterScope.this.variable;
```

### Type 2 Class inside a Method
Classes can be created inside of a method lol
Pretty useless and probably unreadable$^{1000}$  


### Type 3 Anonymous inner class
Immediately override a Parent [[Java Class]] when creating a new [[Object]] of it.
Class does not get a name --> Definition and Instanciation has to happen in one step!
> [!hint] Can be used as a "hack" to instanciate [[Abstract Class|Abstract Classes]] 
```java
public class OuterClass {
	AbstractClass abstractClass = new AbstractClass() {
		@Override
		public int add(int a, int b) {
			return a + b;
		}
	};
}
```

[[Anonymous Class]]
