[[Page]]

- physischer und virtueller [[Memory]] wird jeweils in gleich große Blöcke geteilt
	- Blöcke selbst können variabel groß sein
- Virtuelle [[Adresse]] hat 2 Teile:
	- MSB: virtual page number (VPN)
	- LSB: offset
- Page table ermittelt durch VPN die [[Page Frame Number]] (PFN)
- Physische [[Adresse]]: `(PFN::offset)`

> [!warning] Eine Page kann nur mit einem Set Flags gesetzt werden!!

