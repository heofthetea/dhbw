Essentially boils down to the `du` command:

```bash
du -h <file>
```
This is the size of only one given file. The `-h` flag stands for "human-readable", aka format the size in Giga/Mega/Kilobytes

### Directory
```bash
du -h <directory>
```
- Lists the size of _every_ subdirecory. Fucking awful to read at times.
- with the `-s` flag, only the size of the entire directory summed up is displayed.


### Sort by size
```bash
du -h | sort -h
```
- I'm way too lazy to research what exactly what flag does and simply copy stuff from lö Internét lol