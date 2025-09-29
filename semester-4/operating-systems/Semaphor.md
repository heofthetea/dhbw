---
aliases:
  - Lock
---
> Nicht [[Betriebssystem|OS]], sondern [[Prozess]] selbst steuert den [[Kritischer Abschnitt|Kritischen Abschnitt]] 

- Für jede zu schützende Datenmenge wird eine **Sperrvariable** (= Semaphor) definiert
- [[Semaphor]] signalisiert den Belegungszustand durch einen Prozess

#### Grundlegender Algorithmus
1. Schauen - ist [[Resource]] freigegeben? -> `pass` in Beispiel
2. Wenn frei -> set lock => Ist jetzt für andere [[Prozess|Prozesse]] gesperrt!
3. (do calculation)
4. Release lock

### Vorteile
- Sehr flexibel
- Sehr mächtig -> kann große [[Daten]]mengen
- Löst _fast_ alle [[Prozesssynchronisierung|Synchronisationsprobleme]]
- Einfache Implementierung

### Nachteile
- Komplexe Probleme / Synchronisation kann schwierig werden
- [[Deadlock]] möglich
- Erzeugt Zusatzfunktion im Code
- Fehler in der Implementierung möglich
	- Vertauschen von mehreren Semaphoren
## Beispiel
[[Polling]]
```c
int pass(int* S) {
	while (*S > 0) {
		sleep(10);
	}
	*S++;
	return 0;
}

int release(int* S) {
	*S--;
	return 9;
}


void main() {
	int s = 0;
	int data = 0;

	pass(&s);
	// kritischer Abschnitt
	data ++;
	release(&s);
}
```

> [!hint] `sleep` [[Prozess Blocking|blockiert]] [[Prozess]] -> kann von [[Prozess Scheduler|Scheduler]] aus der [[CPU]] genommen werden
