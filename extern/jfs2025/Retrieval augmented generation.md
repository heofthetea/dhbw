- Anstatt Modell _nachtrainieren_:
	- potentiell relevante Informationen vor Request in [[Konversation mit LLM]] anreichern

> [!hint] Gibt mehr Kontrolle darüber, was LLM preisgeben kann

- Baut Request auf:
```json
{
	"content": "<user request>\n\nAnswer using the following Information: <fetched information>"
}
```

## Access Control
- ermöglicht Verwendung von existierenden Mechanismen

