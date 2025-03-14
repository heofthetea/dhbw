[[1-1 Relation]], [[Relationales Modell]]



- zwei Möglichkeiten, einen [[Fremdschlüssel]] zu verteilen
	==> Frage: welche [[Abbildung]] ist richtig?
- $Mitarbeiter \rightarrow Abteilung$ oder $Abteilung \rightarrow Mitarbeiter$? 

> [!hint] [[Fremdschlüssel]] muss auf die [[Entität]] des Urbilds! (davon, wo eins da sein _muss_)
## Durch [[Min-Max Kardinalität|Min-Max]] Notation
> [!hint] Ziel: Fehlende Fremdschlüsselwerte (also [[null]]-Werte) sollen vermieden werden

- wenn Min-Max Notation auf beiden Seiten gleich ist --> wohin der [[Fremdschlüssel]] gepackt wird ist scheißegal

![[Pasted image 20241015135311.png]]
1. ist scheißegal
2. Fremdschlüssel in <span style="color:rgb(245, 154, 35)">Abteilung</span>
3. Fremdschlüssel in <span style="color:rgb(245, 154, 35)">Mitarbeiter</span>
4. ist hier sinnlos - Falls es Anwendung gibt: auch wieder egal