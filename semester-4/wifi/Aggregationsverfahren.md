> A-MPDU und A-MSDU
> "Aggregated-[[MAC Adresse|MAC]] -(PDU|SDU)"


- Mehrere [[Frame|Frames]] zu einem Frame zusammenfassen
- Vorteil: Man Spart sich Control und [[ACK]] [[WLAN Frame|Frames]]
	- bei A-MSDU: man spart sich auch [[WLAN MAC Header|Header]] 


![[Pasted image 20250410094932.png]]


## Blockweise [[ACK|Quittierung]]
- Aggregierte Frames am Stück quittieren, anstatt jeden Daten-frame einzeln
- c) delayed -> Wenn Empfänger mit Bearbeiten nicht schnell genug hinterherkommt
	- Quittiert ganz am Anfang, dass er alles bekommen hat => dann, später irgendwann, wenn er fertig mit Bearbeiten ist


![[Pasted image 20250410095159.png]]