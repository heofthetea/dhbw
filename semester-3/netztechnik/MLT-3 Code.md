- [[Signal]]-Codierung mit _3 Leveln_
- Ein Pegelwechsel (egal wohin) codiert eine $1$
- Wechselt in einem Takt der Pegel _nicht_ --> $0$

> [!warning] Bei langen Nullfolgen schläft [[Taktrückgewinnung]] ein

- Lösung: Aus $4$-[[Bit]] Block wird ein [[Bit]] angehängt
	- Dieses extra Bit sorgt dafür, dass es mindestens alle $5$ [[Bit]] einen Pegelwechsel gibt

> [!hint] Ermöglicht Umsetzung von $100$Mbit auf $10$Mbit Leitung

![[Pasted image 20241016100651.png]]

[[Idle Signal]]