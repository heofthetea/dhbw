> mehrere [[Prozess|Prozesse]] [[Prozess Blocking|blockieren]] sich gegenseitig, weil sie Zugriff auf dieselbe Ressource benötigen

[[BSOD]]


> [!info] Erkannt durch 4 Bedingungen:

1. **mutual Exclusion** - [[notwendige Bedinging]]
	1. mindestens ein [[Prozess]] in kritischem Abschnitt (= Ressourcen reserviert)
2. kein Entzug von Ressourcen - "**no preemption**" - [[notwendige Bedinging]]
	2. Prozessen können die Ressourcen nicht entzogen werden
3. Nachforderung von Ressourcen - "**hold and wait**" - [[notwendige Bedinging]]
	3. mindestens ein [[Prozess]] hält Ressourcen und wartet auf neue Ressourcen
4. [[hinreichende Bedingung]]: **Zirkuläres Warten**
	4. geschlossene Kette an gegenseitig [[Prozess Blocking|blockierenden]] [[Prozess|Prozessen]]

## Beispiel: Die speisenden Philosophen
- mehrere Philosophen treffen sich zum Abendessen
- kochen Spaghetti

### Spielregeln
- man braucht _zwei_ Gabeln zum Spaghetti holen
- man darf nur die Gabeln direkt neben sich nehmen

![[Pasted image 20250317103639.png]]

- Alle Philosophen nehmen gleichzeitig eine Gabel -> jeder hat nur eine Gabel, aber bräuchte zwei
	- genannt: [[Deadlock]]