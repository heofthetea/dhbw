> Clear Channel Assessment
> [[CSMA|Carrier-Sense]] für [[WLAN]]


## Als State machine
[[Automat]]
![[Pasted image 20250320102616.png]]
## [[Primitive]]
- Request
	- PHY-TXSTART.request(TXVECTOR) 
	- PHY-TXSTART.confirm 
- Daten Senden - Indication
	- PHY-Data.request(DATA) 
	- PHY-Data.indication(DATA) 
	- PHY-DATA.confirm 
- Daten Empfangen - Response
	- PHY-RXSTART.indication(RXVECTOR) 
	- PHY-RXEND.indication(RXERROR → NoError, FormatViolation, CarrierLost, UnsupportedRate) 
- Sende-Ende - Confirm
	- PHY-TXEND.request 
	- PHY-TXEND.confirm