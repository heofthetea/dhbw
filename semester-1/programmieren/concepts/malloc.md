
Manually allocates memory of a given byte size.
```c
uint64_t *temp =(uint64t *) malloc(sizeof(uint64_t));
```
Reserves 8 byte of memory. Returns the pointer _to_ that reserved memory.

> [!warning] Always [[Type Casting|cast]] to correct type!! Only this way, memory will behave as expected.