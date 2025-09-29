[[Übung 2.47 DFA Kreislauf]]
[[Menge]] der [[Unterscheidbarer Zustand|unterscheidbaren Zustände]] $U$ wird dargestellt als Tabelle
> aufgrund von Symmetrie muss nur eine Seite der Diagonale behandelt werden

![[Pasted image 20240927122033.png]]

- Wenn festgestellt wird, dass ein Zustandspaar unterscheidbar ist, wird die Iterationsnummer in die Tabelle eingetragen

> [!hint] Jeder Endzustand ist unterscheidbar von jedem nicht-Endzustand --> kann man direkt eintragen

![[Pasted image 20240927122156.png]]

In jeder Iteration: Durch _alle_ freie Felder durch gehen
- Für jedes freie Feld:
	- Für jeden möglichen Buchstaben:
		- Wo komme ich hin?
			- "von $(1, 3)$ komme ich  mit $a$ zu $(3, 5)$"
		- wenn Zielfeld leer: Ausgangsfeld leer lassen
		- wenn Zielfeld unterscheidbar: Ausgangsfeld ist auch unterscheidbar -> Iterationsnummer eintragen

> [!hint] Wenn in einer Iteration kein neues Paar hinzu gekommen ist, sind alle leeren Felder äquivalent