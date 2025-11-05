- `hooks/` folder
	- hooks für verschiedene Stages (Staging, commit, push)
- `info/`
	- `exclude`: Welche [[File|Dateien]] exclude ich? 
- `objects/`
	- hashes der tracked [[File|files]] -> SHA-1 [[Hash]]
- `refs/`
	- heads
	- tags

> [!hint] Immer wenn `git add` ausgeführt wird, wird der entsprechende hash in das `objects/` [[Directory]] geschrieben.

