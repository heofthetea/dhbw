[[User Mode]]

> [!hint] [[Betriebssystem]] muss [[Multithreading]] nicht inherently unerstützen!

- [[Thread|Threads]] werden in Library implementiert

> [!warning] Verschiedene [[Thread|Threads]] können aber nicht auf unterschiedlichen [[CPU|Prozessoren]] laufen

> [!warning] Erfordert [[Non-preemptive Strategien|non-preemptives Scheduling]], da ein [[Prozess]] kein preemptive Scheduling machen kann (er hat keine Berechtigungen auf die [[cpu]]).


![[Pasted image 20250331102816.png]]
