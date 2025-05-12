> Verändern der unterliegenden [[SQL View]]

- Neue [[Relation]] wird erstellt -> `Training_Institut`

```mermaid
flowchart LR
	kurs[Kurs] --"n"--- durch{"wird_
	durchgefuehrt"} --"1"--- training_institut["training_institut"]
```


- überschreibt pre-existing view
- Schlussendlich ist informationsgehalt gleich

```sql
create view mitarbeiter_besucht_kurs
as
select pers_nr, vorname, nachname, kurs_bez, institut
from kurs
natural join besucht_kurs
natural join mitarbeiter
natural join training_institut;
```