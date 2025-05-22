[[Positional Parameter]]

> [!warning] `$0` ist immer der aufrufende Command


- `$#` -> Anzahl der Parameter
- `${n}` -n-ter Parameter, für 1-9 auch ohne braces
- `$@`/`${@}` -> **alle** Parameter als [[Bash Array]]
- `$*` -> **alle** Parameter als String

> [!warning] Alle [[Positioinal Parameter]] müssen selber implementiert werden.


## Shift
- alle Parameter nach links shiften -> Äquivalent zu [[Queue#Dequeue|Dequeue]]