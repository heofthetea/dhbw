> `x:x:x:x:x:x:x:x` - Jedes `x` ist eine 2-[[Byte]] [[Hexadezimalsystem|Hexadezimal]]-Zahl

[[IP]]

- Ziel: alles deutlich einfacher machen (z.B. kein DHCP-Server mehr notwendig)

> [!warning] Jede Adresse wird an ein **Interface** (=physical ports) vergeben, nicht an einen [[Knoten]]!!

> [!info] $2^{128}$ mögliche Adressen => stupid viel


## Aufbau der Adresse
![[Pasted image 20241114134854.png]]
- Interface ID: Kann beliebig (aber eindeutig!) vergeben werden
	- Ausgangspunkt: eigene [[MAC Adresse]] (sind schon mal $48$ Bit) => [[MAC zu EUI-64]]

> [!hint] Viele folgende Nullen können durch `::` abgekürzzt werden - aber nur **einmal** pro Adresse!!! => Dann kann Adresse vollständig rekonstruiert werden

> [!warning] `/xx` Schreibweise beschreibt jetzt die **Präfix-Länge** (= Global Routing Präfix)




