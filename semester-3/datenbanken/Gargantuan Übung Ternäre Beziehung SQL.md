[[n-stellige Relationship]]

![[Pasted image 20250326151404.png]]

## Kardinalitäten
[[Kardinalität]]

![[Pasted image 20250326151716.png]]
## Funktionale Abhängigkeiten
[[Funktionale Abhängigkeit]]

$$Pers\_{Nr}\times Ort\_{Nr}\rightarrow Proj\_Nr$$
$$Pers\_{Nr}\times Proj\_{Nr}\rightarrow Ort\_Nr$$

## Relationales Modell 
[[n-stellige Relationship als Relation#Für 1 1 N]]

![[Pasted image 20250326152301.png]]

> [!warning] **MERKE**: $$Pers\_Nr \times Ort\_Nr \rightarrow Proj\_Nr$$

## Erstellen Sie die Tabelle 'arbeitet' in SQL mit allen Constraints.
[[SQL create table]], [[FOREIGN KEY Constraint]], [[UNIQUE Constraint]] 
```sql
CREATE TABLE arbeitet (
	Pers_Nr INT  REFERENCES Mitarbeiter,
	Proj_Nr INT  REFERENCES Projekt,
	Ort_Nr INT NOT NULL REFERENCES Ort,

	PRIMARY KEY (Pers_Nr, Proj_Nr),

	UNIQUE (Pers_Nr, Ort_Nr)
	
)
```


## Kann eine trinäre beziehung in eine binäre beziehung umgewandelt werden, ohne dass ein Semantikverlust auftritt?
[[Von ternärer zu binärer Beziehung]], [[n-stellige Relationship als Relation]]

- nein lol
- (gab irgendwie Argumentation dazu -> scheitert an [[Verlustlose Zerlegung]])