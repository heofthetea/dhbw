> full name: **Symbolik Links**, also called **Soft Links**

```bash
ln -s <existing_file> <new_file>
```
_Order of files is important!!_

- Advantage over [[Hard Links]]: Can link _directory_
- when [[Symlink|symlinked]] file is deleted: nothing changes
	- When original file is deleted, symlinked file will contain content of the new file instead of preserving the old one
### link directories
- works seemlessly, as with files
- you can `cd` into the directory - however all files it contains are the same as the linked dir