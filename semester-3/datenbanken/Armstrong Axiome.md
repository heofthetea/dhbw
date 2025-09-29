---
aliases:
  - Interferenzregeln
---
 

[[Hülle einer funktionalen Abhängigkeit]]

1. $Y \in X \Longrightarrow X \rightarrow Y$ ([[Triviale Funktionale Abhängigkeit]])
2. $X \rightarrow Y \Longrightarrow XZ \rightarrow YZ$ (Verstärkung)
3. $X \rightarrow Y \land Y \rightarrow Z \Longrightarrow X \rightarrow Z$ ([[transitiv|Transitivität]])
4. $X \rightarrow YZ \Longrightarrow X \rightarrow Y \land X \rightarrow Z$ (Zerlegung/Dekomposition)
	1. $X \rightarrow Y \land X \rightarrow Z \Longrightarrow X \rightarrow YZ$ (Vereinigung) [[Bijektive Abbildung|Bijektivität]] der Zerlegung
5. $X \rightarrow Y, WY \rightarrow Z \Longrightarrow WX \rightarrow Z$ (Pseudo-Transitivität)


> [!info] Die Schreibweise $AB$ ist kurz für eine [[Menge]] aus [[Attribut|Attributen]] $\set{A, B}$


> [!hint] Ab $4.$ ergeben sich alle Regeln aus den ersten dreien.

## Beispiel
1. $PersNr \in \set{PersNr, Name} \Longrightarrow PersNr, Name \rightarrow PersNr$
2. $PersNr \rightarrow Nachname \Longrightarrow GebDatum, PersNr \rightarrow GebDatum, Nachname$
4. $AusweisNr \rightarrow PersNr \land PersNr \rightarrow Name \Longrightarrow AusweisNr \rightarrow Name$
5. ... 5. umgekehrt 
6. $PersNr \rightarrow Vorname\land PersNr \rightarrow Nachname \Longleftrightarrow PersNr \rightarrow Vorname, Nachname$
7. $AusweisNr \rightarrow PersNr \land Name, PersNr \rightarrow GebDatum \Longrightarrow Name, AusweisNr \rightarrow Z$

