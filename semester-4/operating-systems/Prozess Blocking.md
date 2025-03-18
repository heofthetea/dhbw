> Nötig durch konträre Ziele des [[Prozess Scheduler]]

- pro [[CPU]] gibt es nur _einen_ aktiven [[Prozess]]
- neben [[Memory]] kann dem Prozess noch weiter Ressourcen zugewiesen werden
- ist Resource bereits in Benutzung, wechselt [[Prozess]] in [[Prozesszustand]] "blockiert"
- geblockte [[Prozess|Prozesse]] belegen [[Memory]] und ggf. andere Ressourcen
	- dann ist diese [[Resource]] geblockt

## Beispiel: Die speisenden Philosophen
- mehrere Philosophen treffen sich zum Abendessen
- kochen Spaghetti

### Spielregeln
- man braucht _zwei_ Gabeln zum Spaghetti holen
- man darf nur die Gabeln direkt neben sich nehmen

![[Pasted image 20250317103639.png]]

- Alle Philosophen nehmen gleichzeitig eine Gabel -> jeder hat nur eine Gabel, aber bräuchte zwei
	- genannt: [[Deadlock]]