> Abspaltung von [[Prozess|Prozessen]] in zwei unabhängige [[Pfad|Pfade]]

- [[Prozess]], der von einem anderen [[Prozess]] als [[Kindknoten|Kind]] erstellt wurde
- Ist Systemaufruf von [[Betriebssystem|OS]]-provided `fork()` kopiert

> [!hint] Nur in [[Linux]]/[[UNIX]] bekannt

> [!info] Kind ist im ersten Moment identisch zum Elternprozess - hat aber **unterschiedliche** [[PID|Prozess-ID]]!

### Gründe
- Parallele Ausführung von Aufgaben
- Bessere Auslastung der [[CPU]]
- Zugänglich machen von Funktionen wie [[SSH]] und Shell

## Ablauf
> [!hint] Komplette Umgebung wird kopiert

1. erzeugt neue prozessumgebung
2. erzeugt neuen Adressraum
3. kopiert Elternadressraum in Kindadressarum
4. setzt [[Programm Counter]] auf selbe Stelle im Code

> [!info] `fork()` returned die [[PID]] des Kindes bei Erfolg