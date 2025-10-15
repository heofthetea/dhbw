> REpresentational State Transfer

> [!hint] [[REST]] ist [[stateless]].

> [!warning] Nur wirklich sinnvoll für [[Resource]]-fetching stuff

- [[Client Server Architecture]] im Grunde für seperations of concern
	- Dazwischen beliebig viele zwischenebenen ([[Loadbalancer Service|Loadbalancer]], etc.)
- Architektur zur Datenverarbeitung über [[HTTP]]
- Alle Aktionen/[[Managed Resource|Ressourcen]] sind über [[URL|URLs]] erreichbar
	- => standardisiertes [[Interface]]
- Caching
- Code-on-Demand: [[JavaScript]] vom [[Server]] an den [[Client]] schicken
- [[HATEOAS]]

> [!hint] ist 25 Jahre alt, und kommt aus einer Doktorarbeit lol

[[Richardson Maturity Model]]


## Security
- https://cheatsheetseries.owasp.org/cheatsheets/REST_Security_Cheat_Sheet.html