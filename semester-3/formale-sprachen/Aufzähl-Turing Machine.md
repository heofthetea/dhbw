#todo fuck


[[Turing Machine]] mit leerem Band am Anfang
- ein aufgezähltes [[Wort]] erkennt man daran, dass die [[Turing Machine|TM]] im [[Zustand]] `output` ist.
	- Kopf muss dabei _am Anfang_ des Wortes steht

## Formal
Eine [[Aufzähl-Turing Machine]] ist eine [[Determinismus|deterministische]] [[Turing Machine]] $M = (Q, \Sigma, \Gamma, \Delta, q_{0}, \varnothing)$ mit folgenden Eigenschaften:
1. Es existiert ein **Ausgabezustand** $q_{output} \in Q$
2. Wann immer der Ausgabezustand erreicht wird, gilt der <span style="color:rgb(245, 154, 35)">aktuelle Bandinhalt ausgehend von der Kopfposition</span> bis zum ersten nicht-Alphabetsymbol $\Gamma\ \textbackslash\  \Sigma$  als Ausgabe.
Die von $M$ aufgezählte [[Rekursiv aufzählbare Sprache|Sprache]] ist die [[Menge]] aller Ausgaben, die $M$ ausgehend von $q_{0}$ bei **leerem** Band erzeugt.


> [!hint] Für die [[Semi-Entscheidbarkeit]] wird nur die Terminierung gefordert => Verwerfen eines Wortes entspricht [[Endlosschleife]]


## Beispiel
![[Pasted image 20241108133950.png]]

- Konfigurationsfolge bis zur dritten Ausgabe

$$0\square, \set{output}a\square; 1\square a...$$