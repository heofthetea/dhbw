[[Steuerwerk]], [[Steuerwerk als Automat]]

#klausurrelevant 


![[Pasted image 20241013204109.png]]

- IR = Instruktions-Register
- PSW = [[PSW]]

|                            | Automat                                   | Prozessor                                                   |
| -------------------------- | ----------------------------------------- | ----------------------------------------------------------- |
| $q$                        | [[Zustand]]                               | [[Mikro-Adresse]]                                           |
| $\vec{x}$                  | Eingabe-[[Wort]]                          | [[Instruktion]] + [[Conditioning Code\|Conditioning Codes]] |
| $\vec{y}$                  | Ausgabe-[[Wort]]                          | [[Mikro-Operation]] als [[Steuersignal]]                    |
| Zustandsvariablen-Speicher | (speichert aktuellen [[Zustand]])         | Mikro-Adress-[[Register]]                                   |
| $\delta, \beta$            | [[Übergangsfunktion]] und Ausgabefunktion | Mikro-Programm-Speicher                                     |
| $(q', \vec{y})$            | $\in Q \times Y$                          | [[Mikro-Befehl]]                                            |
### Hints
- [[Instruktion]] entspricht Start-[[Adresse]] eines $\mu$-Unterprogramms
- $\mu$-Programm definiert die [[Instruktion|Maschinenbefehle]] -> Programm austauschen ändert den [[Instruction Set Architecture|Befehlssatz]]
	- man kann einen Prozessor für zwei verschiedene Anwendungszwecke durch den Befehlssatz anpassen
- the [[i386]]-Problem: Hardware kann sich ändern, ohne dass Befehlssatz sich ändert
	- man muss für neue Hardware nur $\delta$ und $\beta$ austauschen
- ermöglicht einfachereren Entwurf -> komplexeres Ergebnis -> [[i386|CISC]]
	- wurden mit der Zeit wieder vereinfacht -> [[RISC]]