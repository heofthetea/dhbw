- Personen $A$ und $B$ bearbeiten den selben [[Daten|Datensatz]] $D$
- $A$ commited zuerst
- nachdem $B$ commited, werden eventuelle Änderungen von $A$ überschrieben
=> Updates, die $A$ getätigt hat, sind verloren

[[Race Condition]]

## Lösung

> [!info] Lösung: [[Semaphor|Locks]]/[[Transaktion]] - ist halt langsam.

- andere Halb-Lösung: revisions
	- Update wird rejected wenn die revisionsnummber nicht passt -> client expected to load & retry (s. [[Git]])

![[Pasted image 20250512170116.png]]