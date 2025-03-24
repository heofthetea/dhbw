[[Prozess]], [[Zustand]]

> [!info] [[Prozess Scheduler]] ist derjenige, der die [[Übergangsrelation|Übergänge]] steuert.

![[Pasted image 20250317094014.png]]

> [!warning] nicht einheitlich in Literatur -> das hier ist _ein_ System.

1. **ready** -> [[Prozess]] kann ausgeführt werden, aber keine [[CPU]] frei
2. **running** -> [[Prozess]] wird ausgeführt
3. **blocked** -> [[Prozess]] wartet auf externes Ereignis (e.g. [[IO]]) => [[Prozess Blocking]]
4. **idle** -> [[Prozess]] wurde gerade neu erzeugt oder ist terminiert
5. **suspended** -> Prozess wurde ausgelagert ([[Swapping]])

> [!hint] 4\. wird oft aufgeteilt in 'new' und 'terminated'
