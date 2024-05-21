> For se Mermaid: https://mermaid.js.org/syntax/classDiagram.html

In einer Stadt gibt es Vereine, wobei ein Verein aus mehreren Mannschaften besteht. Eine Mannschaft ist z.B. eine Fußballmannschaft oder eine Handballmannschaft. Jede Mannschaft besteht aus einer Anzahl Spielern. Ein Trainer trainiert eine Mannschaft. In einem Fußballturnier gibt es mehrere Gruppen, die wiederum aus mehreren Fußballmannschaften zusammen gesetzt sind.




--> learning more mermaid here we go lol
```mermaid
---
Title: Vereine und so Scheiß
---

classDiagram
	direction LR

	Mannschaft <|-- Fußballmannschaft
	Mannschaft <|-- Handballmannschaft
	
	Trainer "1"--"1" Fußballmannschaft
	Trainer "1"o--"n" Handballmannschaft
	
	Verein "1"*--"n" Mannschaft
	Stadt "1"*--"n" Verein
	
	Fußballturnier "n"o--"m" Fußballmannschaft
	
	Fußballturnier "1"*--"n" Gruppe
	Gruppe "1"o--"n" Fußballmannschaft
	
	class Mannschaft {
		<<Abstract>>
	}
	
	class Fußballmannschaft {
		players: int
	}


```