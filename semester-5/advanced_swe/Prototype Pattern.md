> ERstellen von neuen [[Object|Objekten]], indem ein Prototyp geklont wird (anstatt ein komplett neues Objekt zu erstellen)


## Beispiel
- [[Datenbank]] Controller:
	- Connection Data bleibt konstant
- [[Actor Pattern]]:
	- Der Channel Sender bleibt gleicht -> s. MQTT broker (wo ich immer von `_sender` in client clone)