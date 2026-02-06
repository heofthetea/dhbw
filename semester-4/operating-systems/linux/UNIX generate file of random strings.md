[[Bash for loop]]
```bash
for i in {1..100}; do cat /dev/urandom | tr -dc 'a-zA-Z0-9' | head -c 5; echo; done > unsorted_string

```

