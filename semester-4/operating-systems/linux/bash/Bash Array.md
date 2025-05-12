[[Array]], [[Bash]]
```bash
array=( one two three )
```

- Arrays can contain multiple different datatypes:

```bash
array=( 1 two three 4 banana)
```

### Append to Array
- Parameter muss wieder ein [[Array]] sein
```bash
arr=()
arr+=(1)
arr+=( 2 3 )
```