> Is a [[Reference]] to a specific address in memory

```c
int *my_pointer;
```

[[Array|Arrays]] in [[C]] are just a [[Pointer]] to the first element --> [[Random Access auf Arrays]]

### De-reference a pointer
Using an Asterisk operator on a pointer returns the value stored at the location of that pointer.
```c
int get_value_at_pointer(int *a) {
	return *a;
}
```

### Address Operator
Used to reference the address of a specific Variable.
```c
int a = 42;
int *pa = &a;
```
--> really only used in `printf` lol

### Pointer arithmetic
Since pointers are numbers, you can do fancy math with them.
```c
int *p1 = some_value;
p1 = p1 + 3; // moves the memory byte the pointer points to 3 bytes to the right
```
Pointers are type-bound:
when running pointer arithmetic, pointer increases 