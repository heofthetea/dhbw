> Erweiterung on top of [[OAuth 2.0]]
> Welche Nutzerdaten bekommt die App>

- Identität eines Nutzers übermitteln
- Hier kommt der [[ID Token]] her
	- [[ID Token]] kann durch [[OAuth 2.0]] [[Access Token]] erhalten werden
- [[REST]]-like: Man schickt etwas an einen [[Server]] und bekommt eine [[JSON]] antwort (lol)

## Metadata document
- Ähnlich wie bei [[SAML]]
- Das ist dieses `.well-known/open-id-configuration` [[URL]] dingens
- basically:
	- Was kann der [[Server]]
	- !! **NICHT**: ob der server das auch tatsächlich macht