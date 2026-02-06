![[Pasted image 20251008090958.png]]
- [[AD Wandler]]
- Digitales Signal idR 8-[[Bit]] bis 12-[[Bit]]
- Communicaton Protocol: [[I2C]]
	- Kann auch [[Bluetooth]] o.ä. verwenden

### Ansatz 1
- Einen IO-Pin als A/D Wandler Spezifizieren
- dann wandelt der irgendwie magically um

> [!warning] nicht alle [[Mikrocontroller]] haben einen [[AD Wandler]] integriert


### Ansatz 2
- externer [[AD Wandler]] "spendieren"
- <span style="color:rgb(245, 154, 35)">zwischengeschaltet</span> zwischen [[Mikrocontroller]] und [[Sensor]] 