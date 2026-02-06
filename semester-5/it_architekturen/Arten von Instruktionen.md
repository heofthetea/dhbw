[[Instruktion]]


> [!hint]- Damit [[Virtualisierung]] möglich ist, müssen die Sensitiven Instruktionen (control & behaviour)  eine [[Teilmenge]] der Privilegierten Instruktionen sein
> [[i386]] hat(te) Instruktionen, die sensitive waren, aber unprivilegiert -> womp womp
## Privilegiert
- dürfen nur in [[Kernel Mode]] (Ring 0) ausgeführt werden
- ansonsten: [[Interrupt]]

## Control Sensitive
- Die, die versuchen etwas in der configuration der resourcen im System zu verändern

## Behaviour Sensitive
- Das Ergebnis ist abhängig von der Configuration der Resourcen im System