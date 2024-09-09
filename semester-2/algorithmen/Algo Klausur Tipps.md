_immer_ $\Theta$ verwenden, wenn möglich!!!
--> [[Master Theorem]]

Es gibt einen Code-Teil: ~ 2 Zeilen pro Punktp

> [!warning] Richtig abschreiben! Aufgabenstellung genau lesen!!!

- 1 minute pro Punkt!!!
- [[rekursiv|rekursive]] Aufrufe passieren so oft, wie sie da stehen!!!
- [[Basen ineinander überführen|Logarithmisch gleiche Basen]] --> _hinschreiben_, dass konstanter Faktor ist und irrelevant => mt $ln(x)$ argumentieren statt $log_{c}(x)$ 

```c
a = 3 * recursive(data - 1) // 1 rekursiver Aufruf
```

ist _nicht_ gleich!!!!!
```c
a = recursive(data - 1)
a = recursive(data - 1)
a = recursive(data - 1)
// drei rekursive Aufrufe
```

### Code-Analyse
1. Loop isoliert anschauen
	1. --> Vermutung: von $1$ bis $n$
2. Wird $n$ vor der Schleife verändert?
3. Wird $n$ _in_ der Schleife verändert?