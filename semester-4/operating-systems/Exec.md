> Andere Art, [[Kindprozess]] zu starten

> [!info] Problem von [[Forking]]: `fork()` erzeugt eine 1:1 kopie -> schnell Effizienzprobleme, wenn [[Kindprozess]] unterschiedlichen Task vollühren soll.

- Man page of `exec`:  "replace the current process image with a new process image"
	- => ersetzt den [[Kontext]] des aktuellen [[Prozess|Prozesses]]

> [!warning] Ersetzt aber **nicht** die [[PID]]!!

> [!hint] Setzt auch [[Programm Counter]] neu -> Anderer Code.

```c
char *args[] = {"./child_binary", NULL}; // NULL could be replaced with actual args
execvp(args[0], args);
```

![[Pasted image 20250331095559.png]]


### Vorgehensweise
1. Prozessumgebung mit `fork()` kopieren
2. Dann: im [[Kindprozess]] `exec()` aufrufen -> ersetzt die Prozessumgebung im [[Kindprozess|Kind]] 