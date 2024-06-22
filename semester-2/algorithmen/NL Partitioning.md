> Nico Lomuto Partitioning

1. tausche <span style="color:rgb(245, 154, 35)">Pivot</span> mit letztem Element
2. wiederhole, bis [[Liste]] (bis auf den <span style="color:rgb(245, 154, 35)">Pivot</span>) korrekt partitioniert ist:
	1. korrekt partitionierte Liste wird [[Iteration|iterativ]] immer um ein Element vergrößert
		1. Achtung: nicht durch-_swappen_, sondern einfach tauschen!
3. Sortiere <span style="color:rgb(245, 154, 35)">Pivot</span> wieder an richtige Stelle ein


### implementierung
- [[Pointer]] $s_{p}$: merkt sich, wo der Pivot am Ende wieder hin muss
	- incremented with every _Swap_
- [[Pointer]] $s_{u}$: merkt sich, wo das Ende der korrekt partitionierten Teilliste ist
	- _hiermit wird in jedem Schritt getauscht!!_
	- wird nach jedem Taush incrementiert

## Beispiel
![[Pasted image 20240614100741.png]]