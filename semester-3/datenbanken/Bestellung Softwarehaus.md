[[Beispiel Softwarehaus Miniwelt|Softwarehaus ERM]], [[Transaktion]]

1. neuer Datensatz in Bestellung
2. neu in Zwischentabelle:

```sql
insert into bestellung(kunde_id, adresse)
values (1, 'Am Wald 3');

insert into bestellung_position (position_nr, bestellung_id, arikel_id, menge)
values (1, currval('bestellung_id_seq'), 2, 1),
values (2, currval('bestellung_id_seq'), 3, 1);
```

> [!warning] Wenn 1. fehlschlägt -> 2. wird trotzdem ausgeführt.
> Problem: bestellung_position wird der falschen Bestellung zugeordnet!

## Jetzt wird Bestellung ausgeführt
1. Status in Bestellung mus auf "versendet" gesetzt werden
2. Lagerbestand (`menge_aktuell`) in der Tabelle `Lager` muss um die jeweilige Menge verringert werden


```sql
update lager
set menge_aktuell = menge_aktuell -1
WHERE artikel_id = 2;

update bestellung
set status = 'versendet'
where bestellung_id = 1;
```

> [!question] Was passiert, wenn 1. durchläuft, aber 2. nicht?
> - Lagerbestand wurde verringert (theoretisch wurde etwas aus dem lager entfernt)
> - Bestellung ist immernoch offen -> müsste nächstes mal wieder entnommen werden

> [!ERROR] [[Datenbank]] ist jetzt in einem [[Konsistenzüberwachung|inkonsistenten]] Zustand!!!!


