- bei Kollision einzufügendes Element einfach $m$ Stellen danach einfügen
	- rekursiv, falls nochmal eine Kollision auftritt
- Bei Suche: 1. Occurrance finden, dann Elemente danach auf Gleichheit überprüfen
==> Wenn ein Element gelöscht wird: nicht tatsächlich _purgen_, sondern als `removed` markieren aber drin lassen
- <span style="color:rgb(245, 154, 35)">Problem</span>: Begünstigt Clustering von Elementen

#### Schrittgröße
- wie viele Stellen im [[Array]] gehe ich weiter, um mein Element abzulegen
> [!warning] Schrittgröße muss [[teilerfremd]] zu Tabellengröße sein!!
> ==> nimm Primzahl als Tabellengröße

- wenn nicht: Beim einfügen kann es passieren, dass die Tabelle als voll interpretiert wird (weil freie Plätze einfach nicht erreicht werden)
