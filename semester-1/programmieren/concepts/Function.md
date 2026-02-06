> [[Abbildung]] in einer Programmiersprache
> [[Morphism]] in the [[Category]] of [[Type|Types]]

- Eingabe: Kombination aus mehreren Parametern $\vec{x} \in P = P_{1} \times P_{2} \times \dots P_{n}$
- Ausgabe: $\vec{y} \in R$, wo $R$ der [[Type|Datentyp]] der Ausgabe ist

$$f:\ P \longrightarrow R$$

```c
R f(P1, P2, ... Pn)
```

```rust
f(P1, P2, ... Pn) -> R
```
## call by value

**Pass values as parameter
then return calculated result**

Data types of _parameters_ and _arguments_ must match!
Memory of function only stores data for the _duration_ in which the function is running
--> once function is left, all data gets deleted!!

```c
int function_add(int, int); // prototype definition

main () {
	int a = 4, b = 3, erg;

	erg = function_add(a, b); // call to function
}

int function_add(int x, int y) {
	int erg = x + y;
	return erg; //return value of function
}
```

#### prototypes

Why prototypes?
allows a program to define a function _below_ the `main`method
--> serves readability
A funtions prototype must have _the same signature as the function_!

## call by reference

**Pass [[Pointer|pointers]] as parameters
write directly to global variable instead of returning**

--> Functions have _void_ return type and take _pointers_ as parameters

```c
int function_add(int, int); // prototype definition

main () {
int a = 4, b = 3, erg;

erg = function_add(&a, &b, &c); // call to function
}

void function_add(int* pa, int* pb, int* perg) {
	*perg = *pa + *pb;
}
```
