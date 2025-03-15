> Mechanismus, die [[Server]]-seitige Verbindungen nutzen können, um [[Client]]-seitig Informationen speichern und auslesen zu können.

- Erfunden 1994 von Netscape
- Solle Unzulänglichkeiten von [[HTTP]] umgehen
	- HTTP ist Stateless - Aufgaben die mehrere Requests/Kontext brauchen (wie [[Session-based Authentication]]) gehen nicht einfach
- Sobald das Cookie gesetzt ist, werden sie _immer_ mitgeschickt

![[Pasted image 20250313131226.png]]


## Controversies
> [!hint] Stammt ursprünglich aus einem Artikel von on Udell (in 1997)

- Server kann private Daten vom Computer lesen -> **STIMMT NICHT** (zumindest nicht so pauschal)