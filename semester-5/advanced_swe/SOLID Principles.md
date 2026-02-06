
- Single responsibility
- open-closed
- liskov substitution
- interface segregation
- dependency inversion

## Single Responsibility
- jede [[Class]]/[[Modul]] soll nur für eine Sache gleichzeitig verantwortlich sein
- => Separation of concerns

## Open-Closed Principle
??

## Liskov Substitution Principle
- basically:
	- die [[Abstraction]] eines [[Type]] kann ersetzt werden durch den Subtyp
- ermöglicht den ganzen Generics/SPI Spaß in Java

> [!warning] Aber: das Ergebnis soll identitsch sein -> das Beispiel für [[Abstraction]] Square/Rectangle ist _nicht_ liskov-konform!

## Dependency Segregation
- lieber mehrere kleine interfaces, als ein großes
- (dieses extends A, B, C, D.... dingens anstatt extends ABCD)

## Dependency Inversion
- Abhängigkeiten sollten immer von _high-level_ [[Abstraction|Abstractions]] sein
	- idealerweise nur von Interfaces lol
- => [[Dependency Injection]]