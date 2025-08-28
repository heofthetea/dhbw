> saves history of commands to bash history file


### unlimited history
set in `.bashrc`:
```bash
export HISTSIZE=
export HISTFILESIZE=
```


### delete sequence of history entries
```bash
for i in {lo..hi}; do
	history -d lo;
done
```

> [!warning] Very important to only delete in one place, because the indixes truncate themselves after one is deleted -> procedure similar to [[Master Boot Routine|MBR]] lol

