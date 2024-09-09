> Errors caused by elements at the Interval bounds


### Example
```c
int i = 5;
while (i > 0) {
	i -= 1;
	printf("%i", i);
}
```
output: `43210`
what I predicted: `54321`
==> order of operations is important
