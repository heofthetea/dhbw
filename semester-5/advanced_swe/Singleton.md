> Es gibt genau eine Instanz einer [[Java Class|Klasse]]

- eager Instanciation: Wird sofort instanziiert
- lazy Instanziation: Wird erst instanziiert wenn wenn die Instanz benötigt wird


```java
class MySingleton {
	private MySingleton instance;
	private Singleton() {}
	
	// Instance only gets created when actually needed -> lazy instanciation
	public getInstance() {
		if this.instance != null {
			this.instance = new MySingleton;
		}
		return this.[]()instance;
	}
}
```