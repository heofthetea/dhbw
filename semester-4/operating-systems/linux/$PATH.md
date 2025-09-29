> Variable listing a bunch of paths on the filesystem. Is used to map commands to executables.

- The order of paths is important. When there's 2 executables with the same name, the first one found in PATH will be used. PATH is read left to right.

```bash
echo $PATH
/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
```

### Format
```
/path/1:/path/2:/path/3
```


### Add to $PATH
```bash
PATH="/my/new/path:$PATH"
```
write this line in `~/.profile`, and logout.
Using `.bashrc` is not recommended for setting environment variables.