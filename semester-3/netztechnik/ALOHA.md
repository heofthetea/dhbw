- Sobald Sender ein [[Frame]] zum Senden hat -> abfeuern
- Sender wartet einen timer ab; wenn innerhalb der Zeit kein Acknowledgement vom Receiver zurück kommt, wird von [[semester-3/netztechnik/Kollision|Kollision]] ausgegangen
	- Sender wartet zufällig generierte Zeit; dann wird Paket erneut versendet

```python
while frame:
	try:
		send(frame)
		sleep(TIMER)
		if acknowledgement:
			break
	except collision:
		sleep(random())
```

## Slotted ALOHA
- regulär ALOHA hat maximal $18.4\%$ Durchsatzquote
- [[ALOHA]] unterteilt Zeit in Slots/[[Taktsteuerung|Takt]] 
	- es gibt immernoch [[semester-3/netztechnik/Kollision|Kollisionen]], aber immer nur komplett in einem Takt

> [!hint] bis zu $36\%$ Durchsatzquote