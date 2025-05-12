```bash
if [ <predicate> ] then
	# stuff
fi
```

> [!warning] Leerzeichen ist wichtig!!!

[[Prädikat]]

> [!hint] `[[ ]]` - do not really worrry about string auto-splitting at spaces

![[Pasted image 20250512100612.png]]

```bash
if [ test 1 -eq 1 ]
```

is equivalent to 

```bash
if [[ 1 -eq 1 ]]
```