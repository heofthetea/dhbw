> Inkompatible Schnitstellen kompatibel machen

- **Problemstellung**: Bestehendes System soll erweitert werrden mit einem System, das bisher noch nicht genutzt wurde
	- Aber: Neues System hat inkompatible Schnittstellen
- Ziel: keinen existieenden Code verändern

## Klassenadapter
- Erbt von Client-Interface und Service
	- => High [[Coupling]]
> [!hint] Scheitert in speziell Java daran, dass Multi-Inheritance nicht tut

## Objekt-Adapter
- Nutzt Zusammensetzung von [[Interface]] (Komposition)