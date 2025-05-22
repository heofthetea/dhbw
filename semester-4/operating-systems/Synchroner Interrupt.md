> vorhersehbarer [[Interrupt]]

- Traps (bsp. Code Breakpoints )
- Exceptions (z.B. [[Segmentation Fault]]) - sind korrigierbar
- Aborts (z.B. double fault[^1]) -> irreperabel

> [!hint] Sind immer vom code-generiert; alles was mit [[IO]] zu tun hat ist auf jeden fall asynchron

> [!hint] Sind idR vorhersehbar

[^1]: Wenn [[Segmentation Fault|Page Fault]] ausgelöst wird, und in der Abhandlungsroutine **noch** ein Fehler passiert
