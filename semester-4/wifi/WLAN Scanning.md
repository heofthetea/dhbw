> [[DEE|Endgerät]] muss erstmal herausfinden, ob ein [[Access Point]] existiert

- [[Access Point]] schickt alle ~100ms einen [[Beacon Frame]] los (= **passive scanning**)
- [[DEE|Endgerät]] muss auf jedem [[Kanal]] hören, ob irgendwo zufällig ein [[Beacon Frame]] kommt

> [!hint] Manchmal wird [[BSSID]] vom [[Access Point]] nicht im [[Beacon Frame]] broadcastet (Sicherheitsgründen) => [[#Active Scanning]]

> [!warning] An diesem Punkt gibt es aber noch keine Rollenverteilung => Wer [[Access Point]] ist, und wer nur [[Station]], wird erst in [[WLAN Assoziation|Assoziation]] ausgehandelt.
## Active Scanning

- Probe Request -> [[DEE|Endgerät]] fragt [[Access Point]], was er kann
- MinChannelTime -> Gerät muss Mindestzeit warten, ob Probe Response zurück kommt
- Probe Response -> [[Access Point]] sagt jetzt alles was er kann, auch seine [[BSSID]]
- durch [[CSMA CA]] kann es sein, dass nicht die beste Verbindung zuerst antwortet
	- abwarten einer MaxChannelTime, um die beste Verbindung rauszufinden

![[Pasted image 20250417105512.png]]