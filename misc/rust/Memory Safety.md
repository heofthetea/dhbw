[[Memory]], [[C]], [[C Array]], [[Array]]

- out of bounds exception

> [!hint] [[Rust]] prevents both of these behaviours at [[Compiler|compile]]-time.
## Spacial Violation
```c
int main() {
	int arr[10];

	arr[20] = 42; // out of bounds - not forbidden by c
}
```

> [!hint] usually happens because an array is indexed through a variable (`arr[i]`)

> [!warning] Spacial Memory Safety Violation => should not happen, but does


## Temporal Violation - Use-after-free
- uses space after it has been freed by the [[c free]] function

```c
int *x = malloc(sizeof(int));
free(x);
*x = 10;
```

