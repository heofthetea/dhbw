
1) find a prime number (start with 2)
2) exclude all multiples of that prime number

### Pseudo code:
```
initialize entire array with 1
start with 2:
	for each multiple of 2:
		set this element of array to 0
continue to next occuring 1:
	repeat

for every element in array:
	if(element == 1):
		element is prime
```

### C implementation
```c
void sieve(bool *sieving_array, size_t len_sieving_array)
{
    for (int i = 2; i * i < len_sieving_array; i++)
    {
        if (sieving_array[i])
        {
            for (int j = i * i; j < len_sieving_array; j += i)
            {
                sieving_array[j] = false;
            }
        }
    }
}

```