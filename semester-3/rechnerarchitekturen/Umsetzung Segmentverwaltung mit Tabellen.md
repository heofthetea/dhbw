
![[Pasted image 20241024104035.png]]

- Offset sind $32$ bit ==> max. Segmentgröße $4\ GB$ 


## Registerschaltung
- Selektor: $16$ bit
- Index: die ersten $13$ davon
	- $8 \cdot 1024$ Einträge $= 8192$ mögliche Segmente
- Descriptor: $8B$ ==> Tabelle hat $64\ KB$ (= 1 [[Segment]] im Real Mode)
- Table Indicator: $1$ bit
	- globale/lokale [[Lookup Table|Descriptor Table]]
- RPL: Rights Priority Level (2 bit)

![[Pasted image 20241024104054.png]]

[[Descriptor Tables]]

## Adressierbar

| logischer Adressraum    | physischer Adressraum |
| ----------------------- | --------------------- |
| $32$ bit offset         | 32 bit --> 4 Gigabyte |
| $13$ bit index          |                       |
| $1$ bit tabelle         |                       |
| 46 bit --> $64$ TB groß |                       |

