> Move the [[Bit|Bits]] of a value in memory to the left (`<<`) or to the right (`>>`)



```c
int a = 515;
int res = a >> 8; // move 8 bits to the right
// a res is 2
```


## Equivalence
### Right
```c
a >> n
```

is equivalent to the operation 

$$\left\lfloor\frac{a}{2^{n}}\right\rfloor$$

- the 8 [[LSB]]s are discarded

### Left
- bit-shifting to the laft just spawns zeroes

```c
a << n
```
is equivalent to the operation
$$a \cdot 2^{n}$$
