[[Theta Join]], [[RelAlg Kreuzprodukt]]

```sql
-- join
select *
from kunde
join auftrag on kunden_nr = erteilt_von;

-- join
select * from auftrag, kunde
where erteilt_von = kunden_nr;
```

- Ergebnis ist gleich
- Ablauf intern ist auch gleich:
- [[DBMS]] optimizer macht das, mit am Wenigsten aufwand => Die kompletten Kreuzprodukt-[[Tupel]] aufzubauen ist in Sachen [[Komplexität]] eine Vollkatastrophe

![[Pasted image 20250507134157.png]]