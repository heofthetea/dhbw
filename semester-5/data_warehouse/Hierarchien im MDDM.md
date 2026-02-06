> Ziel: Dimensionen ordnen (why???)

- hält sich immer am Business Modell
![[Pasted image 20251021094918.png]]

## Ansätze
> [!hint] usual tradeoff zwischen [[Normalisierung]] und Performance
## 1. Denormalisiert
- Denormalisiert
- -> Alle Hierarchien in einer Tabelle
![[Pasted image 20251021095301.png]]

## 2. Normalisiert
- eine Tabelle für jede Hierarchie
- [[Fremdschlüssel]] auf [[Elternknoten]]

> [!hint] Vorteil: Man muss Hierarchieänderungen halt nur noch an einer Stelle machen

![[Pasted image 20251021095352.png]]

> [!hint] Führt dann zu einer "Snowflake":
> - [[Fact Table]] linked zu z.B. einem Modell
> - Man muss noch einmal weiter [[Join|joinen]] um mehr Informationen zu bekommen
> ![[Pasted image 20251021095610.png]]