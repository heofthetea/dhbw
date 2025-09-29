> mehrere [[Prozess|Prozesse]] [[Prozess Blocking|blockieren]] sich gegenseitig, weil sie Zugriff auf dieselbe Ressource benötigen

[[BSOD]]


> [!info] Erkannt durch 4 Bedingungen:

1. **mutual Exclusion** - [[notwendige Bedingung]]
	1. **nur** ein [[Prozess]] kann [[Resource]] reservieren (im [[Kritischer Abschnitt|kritischen Abschnitt]] sein)
2. **kein Entzug** von Ressourcen - "**no preemption**" - [[notwendige Bedingung]]
	2. Prozessen können die Ressourcen nicht entzogen werden
3. **Nachforderung** von Ressourcen - "**hold and wait**" - [[notwendige Bedingung]]
	3. mindestens ein [[Prozess]] hält [[Resource|Ressourcen]] und wartet auf neue Ressourcen
4. **Zirkuläres Warten** - [[hinreichende Bedingung]]
	4. geschlossene Kette an gegenseitig [[Prozess Blocking|blockierenden]] [[Prozess|Prozessen]]

> [!hint] Kritische notwendige Bedinungen sind 1. und 3. (mutual exclusion und nachfordern)
## Beispiel: Die speisenden Philosophen
- mehrere Philosophen treffen sich zum Abendessen
- kochen Spaghetti

### Spielregeln
- man braucht _zwei_ Gabeln zum Spaghetti holen
- man darf nur die Gabeln direkt neben sich nehmen

![[Pasted image 20250317103639.png]]

- Alle Philosophen nehmen gleichzeitig eine Gabel -> jeder hat nur eine Gabel, aber bräuchte zwei
	- genannt: [[Deadlock]]