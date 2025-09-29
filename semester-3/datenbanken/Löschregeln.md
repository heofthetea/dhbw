> Ziel: [[Referenzielle Integrität]] bei [[SQL DELETE|Löschungen]] von Datensätzen sicherstellen

- Löschregeln definieren, wie mit dieser Integrität umgegangen werden soll

# Beispiel
![[Pasted image 20250409130410.png]]
[[1-n Relationship]] 

- wird Abteilung gelöscht => Löschen wird abgewiesen.
- 3 Möglichkeiten, wie [[DBMS]] sich verhalten soll:
## SET NULL
- einfach den [[Fremdschlüssel]] `arbeitet_in` in Mitarbeiter auf [[null]] setzen, wenn Abteilung gelöscht wird.
- passiert schon beim [[SQL create table|CREATE]] in den [[SQL Constraints|Constraints]]:

```SQL
FOREIGN KEY (arbeitet_in) REFERENCES Abteilung on delete set NULL;
```

> [!hint] Kann auch auf andere Werte gesetzt werden!!

## CASCADE
![[Pasted image 20250409131330.png]]
- für [[Schwacher Entitätstyp|schwache Entitäten]] 
- Löscht alle Einträge in anderen Entitäten, die auf den gelöschten Eintrag referenzieren

```sql
FOREIGN KEY (erteilt) REFERENCES Kunde on delete CASCADE;
```


## RESTRICT
- ist die default-Regel des [[DBMS]]
- Da wird einfach rejected lol
- Sinnvoll in [[Semantik|semantischem]] [[Kontext]], bei dem dieses Verhalten gewünscht ist -> "Solange X existiert darf Y nicht gelöscht werden, punkt, komma, aus."

> [!hint] **Stark**er Tipp: Einfach immer hinschreiben, obwohl es default ist.

```sql
FOREIGN KEY (key) REFERENCES table_name on delete RESTRICT;
```

