> [[Computer]] kann über [[LAN]] [[Ethernet]] angeschalten werden

- Netzwerkkarte wartet auf "Magic Packet":
	- 6x `0xff` => lauter Einsen
	- 16x die [[MAC Adresse]] des Ziel-gerätes
		- wird auch als Verifizierung benutzt, ob tatsächlich _dieses Gerät_ gemeint ist
	- Wird als [[Broadcast]] geschickt 

> [!hint] Diese Kombination ist mathematisch quasi [[Unmögliches Ereignis|unmöglich]], natürlich aufzutreten.

