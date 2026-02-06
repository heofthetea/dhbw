[[Assemblersprache]]

> [!warning] Ist nur für [[Mikrocontroller]] - nicht für PC

- Quellcode - [[Assemblersprache|Assembler Code]] (in Text)
- `[ Compiler (Assembler-Programm) ]` 
	- ==> Objekt-Datei - **ohne _feste_ Adressen!** (in [[Binärsystem|binary]], Information als Text)
-  \[ [[Linker]] und [[Locator]] ]
	- ==> Absolut-Objekt Datei (mit _festen_ Adressen)
- `[Objekt-Hex-Konverter]`
	- ==> [[Hexadezimalsystem|Hex-Datei]] ([[Binärsystem|Binary]] + [[Checksum]])
- `[ Programmer ]`
	- überprüft, ob Stuff im Programmspeicher angekommen ist
