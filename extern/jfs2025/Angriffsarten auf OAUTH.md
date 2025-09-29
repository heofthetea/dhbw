#todo bild aus folie

- Angriff auf [[JWT]]
- [[Client]]-side:
	- Fast nur noch Single Page Applications -> Gefährlich, angreifbar
	- Persistent Token theft: Persistentes Einnisten in Client, um konstant [[Access Token]] zu klauen
	- Substitution attack -> invisible [[iframe]]

## Auf Auth Server
- [[JWT]] [[Digital Signature]] Algorithm ("alg" field) auf [[null|none]] setzen
	- wird dann von fehlimplementationen nicht mehr verifiziertn

> [!hint] Wenn [[symmetric Encryption]] [[Cryptographic Key|Key]] gecrackt wird -> man kann alles machen

## Auf Tokens
- Cross-[[JWT]]-Confusion: [[ID Token]] als [[Access Token]] versuchen, unterzujubeln
- Schwache [[Digital Signature|signaturen]] => bessere Algorithmen

