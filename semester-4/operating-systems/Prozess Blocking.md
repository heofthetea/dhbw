> Nötig durch konträre Ziele des [[Prozess Scheduler]]

- pro [[CPU]] gibt es nur _einen_ aktiven [[Prozess]]
- neben [[Memory]] kann dem Prozess noch weiter Ressourcen zugewiesen werden
- ist Resource bereits in Benutzung, wechselt [[Prozess]] in [[Prozesszustand]] "blockiert"
- geblockte [[Prozess|Prozesse]] belegen [[Memory]] und ggf. andere Ressourcen
	- dann ist diese [[Resource]] geblockt

> [!warning] Risiko: [[Deadlock]]
