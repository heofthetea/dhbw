> stands for **s**tream **ed**itor

- can be used to replace content in file
```bash
sed '<datatype>/<find>/<replacement>/' <input-file>
```
--> find + replace - doesn't overwrite file
- use `-i` flag for that

### searching for types
`"s/"` --> searches for string
- `sed s/hello` 
> [!info]- The character after the datatype is the delimeter
> So you can use any character as the delimieter
