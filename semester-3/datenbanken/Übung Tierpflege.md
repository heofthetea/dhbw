[[Normalisierung]], [[3NF]], [[Funktionale Abhängigkeit]], [[Relation]]
### Aufgabenstellung
In einem Zoo arbeiten verschiedene Tierpfleger für verschiedene Tiere. Die Daten sind in einer Excel-Tabelle abgelegt. Diese Tabelle soll nun normalisiert und in einer kleinen Datenbank gespeichert werden.

![[Pasted image 20241119132857.png]]

1. Stellen sie die gesamte [[Relation]] auf. -> Attribute atomar machen
2. Bestimmen Sie die funktionalen Abhängigkeiten.
3. Zerlegen Sie den Datensatz in Relationen bis zur [[3NF]].

 
## Bearbeitung
### 1. Relation in [[1NF]] aufstellen
$$R_{1}: \set{[TierNr, TierName, UnterkunftsNr, PersNr, PflegerName, Pflegeaufwand]}$$
> [!hint] Damit die Attribute atomar sind, sind in der [[Instanz einer Relation|Instanz]] die Mengenattribute einfach in eine neue Zeile geschrieben 
> Aus Zeile 1 werden zwei neue Zeilen (einmal mit PersNr $101$ und einmal mit $102$ - und den Entsprechenden Pflegername und Pflegeaufwand)

### 2. $F$ aufstellen
1. $TierNr, PersNr \rightarrow [R]$ => [[Schlüsselkandidat]]
2. $TierNr \rightarrow TierName, UnterkunftsNr$
3. $UnterkunftsNr \rightarrow UnterkunftsName$
4. $PersNr \rightarrow PflegerName$

### 3. in [[2NF]]

> [!warning] Problematisch sind 1. und 3.

$$R_{1} : \set{[\underline{TierNr}, TierName, UnterkunftsNr, UnterkunftsName]}$$
$$R_{3}: \set{[\underline{PersNr}, PflegerName]}$$
$$R: \set{\underline{PersNr \uparrow}, \underline{TierNr\uparrow}, PflegeAufwand}$$

### 3. Zerlegen
- Überprüfen $R_{1}$ auf [[3NF]]

| X             | $\alpha$        | [[Superschlüssel]] | [[Primattribut]] |
| ------------- | --------------- | ------------------ | ---------------- |
| TierNr        | TierName        | ✅                  |                  |
|               | UnterkunftsName | ✅                  |                  |
|               | UnterkunftsNr   | ✅                  |                  |
| UnterkunftsNr | UnterkunftsName | ❌                  | ❌                |

=> $UnterkuntsNr$ rausziehen


$$R_{1} : \set{[\underline{TierNr}, TierName, UnterkunftsNr\uparrow]}$$
$$R_{2} : \set{[\underline{UnterkunftsNr}, UnterkunftsName]}$$
$$R_{3}: \set{[\underline{PersNr}, PflegerName]}$$
$$R: \set{\underline{PersNr \uparrow}, \underline{TierNr\uparrow}, PflegeAufwand}$$
