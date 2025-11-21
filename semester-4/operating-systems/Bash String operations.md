[[Bash Strings]]

### Substring
- [[Python Slicing]]

```bash
#!/bin/bash 
mystr="Hello World!" 
hello=${mystr:0:5} 
echo $hello 
world=${mystr:(-6)} 
echo $world 
world2=${mystr:6:5} 
echo $world2
```

> [!warning] Format `start:length`, nicht start:end wie in python

### Replace
> [!hint] Equivalent to [[sed]] `| sed`

```bash
mystr="Hello World"
newstr=${mystr/World/Universe}
```


### String Splitting

```bash
mystr="Hello World!"
echo $(echo $mystr | cut -d ';' -f1)
echo $mystr | cut -c 7-11 # yields "World"
```

- `-d`; delimeter