
> [!hint] Auf [[Linux]] wird fast alles in [[Kernel-Level Thread]] übersetzt.



> [!warning] [[Kernel-Level Thread]] kann langsamer sein, weil auf [[Kernel Mode]] umgeschalten werden muss. **Aber**: [[Prozess Blocking|Blockierende]] [[Thread|Threads]] können vom [[Prozess Scheduler|Scheduler]] behandelt werden -> ist wiederum schneller.
Deswegen -> Kombinieren mit [[User-Level Thread]]:

![[Pasted image 20250331103454.png]]
- Prozessor vergibt Ressourcen an einen [[Kernel-Level Thread]] -> Der entscheidet dann, welcher [[User-Level Thread]] grade laufen darf



