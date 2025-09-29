[[OAuth 2.0]], [[Angriffsarten auf OAUTH]]

- Wildcard in [[URI]] rediraction
	- exaktes matching ist vorgeschrieben von [[OWASP ASVS 5]]
- Verhindern von Auth token injection
- use [[asymmetric Encryption]]
- Vorschrift, was an Rollen alles mit in den Token darf (easycloak go brrrrrr)

> [!warning] nicht jwt.io zum dekodieren verwenden (zumindest nicht für Production Tokens) lol
> Alternative: `jwt_tool` Python script
> (bietet auch eine Möglichkeit für bruteforcing)

