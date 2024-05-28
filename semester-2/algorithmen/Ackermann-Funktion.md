$a(n, m)$ mit
- $a(0, m) = m + 1$
- $a(n + 1, 0) = a(n, 1)$
- $a(n + 1, m + 1) = a(n, a(n + 1, m))$
[[Recursion]]

### Terminierung
Mit jedem Aufruf wird mindestens ein Argument kleiner.

### Laufzweit
scales _horribly_, weil rekursiver aufruf verschachtelt ist
