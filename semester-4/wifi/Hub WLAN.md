[[WLAN Beschwerdemail]]

### Prüfungsvorbereitung
- [[Prüfungsfragen WLAN]]
- [[Library WLAN]]
- [[Klausurfragen_WLAN_STG-TINF22BE.pdf]] -> Altklausur von ihm
- [[WLAN_Testklausur_STG-TINF20B.pdf]] -> Altklausur von Christian
- [[Tipps Klausur]]

### Resources
[[WLAN-Vorlesung_Teil-1.pdf]]
[[WLAN-Vorlesung_Teil-2.pdf]]
[[WLAN-Vorlesung_Teil-3.pdf]]
[[WLAN-Vorlesung_Teil-4.pdf]]
[[WLAN-Vorlesung_Teil-5.pdf]]
[[WLAN-Vorlesung_Teil-6.pdf]]
[[WLAN-Vorlesung_Teil-7.pdf]]
[[WLAN-Vorlesung_Teil-9.pdf]]
[[WLAN-Vorlesung_Teil-10.pdf]]
[[WLAN-Vorlesung_LoRaWAN.pdf]]

[[WLAN-Analyse_mit_Wireshark-1.pdf]]

[[WLAN-Script_20250325.pdf]]
## Basics
[[WLAN-Vorlesung_Teil-1.pdf]]

- [[WLAN]]
- [[WLAN Geschichte]]
- [[WLAN Vorteile]]
- [[WLAN Nachteile]]
- Service Sets
	- [[BSS]]
	- [[IBSS]]
	- [[PBSS]]
	- [[Infrastruktur BSS]]
	- [[ESS]]
- [[Handover]], [[Roaming]]
- [[Mobile IP]]
- [[WLAN Security]]

## Funk
- [[Funk]]
- [[Funkzelle]]
- [[WLAN Modi]]
- [[Kanal]]
- [[Frequenzbänder]]
	- [[2.4G]]
	- [[5G]]
		- [[DFS Kanal]]
- [[Multiplex]]
	- [[SDMA]]
	- [[FDMA]]
	- [[TDMA]]
	- [[CDMA]]
- [[Modulation]]
	- [[BPSK]]
	- [[Barker Code]]
	- [[QPSK]]
	- [[QAM]]
- [[Management Frame]]
- [[Control Frame]]

## WLAN im [[OSI-7-Schichten Modell]]
- [[WLAN Frame]]
	- [[WLAN Präambel]]
- [[WLAN im Schichtenmodell]]
- [[Layer Management]]
	- [[Primitive]] & [[SAP]]
- [[CCA]]

## Datenübertragung & Multiplex
- [[Signalspreizung]]
	- [[Signalspreizung mit TDMA und FDMA]]
	- [[Frequency Hopping]]
	- [[DSSS]]
	- [[OFDM]]
		- [[Pilotträger]]
		- [[OFDM Sendeeinheit]]
		- [[OFDM Empfangseinheit]]
		- [[Faltungscodierer]]
			- [[Punktierung]]
				- [[Depunktierung]]
			- [[Beispiel Faltungscodierer]]
			- [[Viterbi Algorithmus]]
	- [[Mehrwegeausbreitung]]
		- [[Kanalabschätzung|Kanalabschätzung/Trainingssequenz]]
- [[Datenrate]]

## Faltungscodierer im Detail
[[Faltungscodierer-v2.pdf]]

- [[Faltungscodierer]]
	- [[Zustandsdiagramm aus Faltungscodierer]]
	- [[Generatorpolynom]]
	- [[Coderate]]
	- [[Beispiel Faltungscodierer]]
	- [[Beispiel Faltungscodierer ii]]
- [[Viterbi Algorithmus]]
	- [[Viterbi Algorithmus bei Bit flips]]

## Hamming-Code
[[Hamming-Code.pdf]]

- [[Hamming Code]]
	- [[Algorithm for Hamming Code]]

## WLAN auf MAC-Ebene
- [[Layer 2]]
- [[MAC Adresse]]
- [[WLAN MAC Header]]
	- [[Frame Control Header Field]]
- [[Distributed Coordination Function]]
	- [[CSMA CA]]
		- [[Exponential Backoff]]
	- [[Hidden Station Problem]]
		- [[RTS CTS]]
	- [[Exposed Station Problem]]
	- [[WLAN Fragmentierung]]
- [[Point Coordination Function]]
- [[Beacon Frame]]
	- [[Zeitsynchronisation Ad-hoc Modus]]
- [[Coordination PCF und DCF]]

## IEEE802.11 Erweiterungen
[[WLAN-Vorlesung_Teil-5.pdf]]

- [[IEEE 802.11]]
	- [[MIMO]]
	- [[Beamforming]]
	- [[Space Time Block Coding]]
	- [[Low-Density Parity Check]]
	- [[Sektrale Effizienz]]
	- [[Phased Coexistence]]

## weird af IEEE802.11 standards
[[WLAN-Vorlesung_Teil-6.pdf]] 

- [[IEEE 802.11]]
- [[Resource Units]]
- [[BSS Colouring]]
- [[Target Wakeup Time]]
- [[802.11ac vs. ax]]
- [[Wifi 6e]]
- [[Wifi 7]]
	- [[Multi-Link Operation]]
	- [[EMLMR]]
	- [[EMLSR]]

## Verbindungsaufbau
[[WLAN-Vorlesung_Teil-7.pdf]]

- [[World Mode]]
- [[Quality of Service]]
	- [[WLAN QoS Priorität]]
- [[Handover]]
- [[WPA]]
- [[WLAN Verbindungsaufbau]]
	- [[WLAN Scanning]]
	- [[WLAN Authentication]]
	- [[WLAN Assoziation]]


## finally Sicherheit? nein Antennen BRO WTF WARUM KÖNNEN WIR NICHT EINFACH COMPILERBAU HABEN WTFFFFFFFFFFFF
- [[Antenne]]
	- [[Antennen in Handys]]
	- [[Patch Antenne]]
	- [[Yagi-Antenne]]
- [[Antennengewinn]]
- [[Freiraumdämpfung]]
- [[Halbwellendipol]]
- [[Dipolgruppen]]
- [[Halbwertsbreite]]
- [[Fresnel Zone]]
- [[Hindernisse für Funkwellen]]
- [[Übung Sendeleistung]]

## Security COMPLETELY BUTCHERED
- [[Schutzziele WLAN]]
- [[End-to-End Encryption]]
- [[WEP Encryption]]
	- [[WEP Disaster]]
- [[WPA]] 
	- [[WPA Modi]]
	- [[WPA PRF]]
	- [[Group Key]]
	- [[TKIP Encryption]]
	- [[TKIP Decryption]]
	- [[TKIP Header]]
- [[WPA2]]
	- [[AES]]
	- [[CCMP Encryption]]
	- [[CCMP Decryption]]
- [[WPA3]]
- [[Hub WLAN Security]]


## FUCKING NETZPLANUNG
- [[WLAN Reichweite]]
- [[WLAN Flächenplanung]]
- [[WLAN Flächenplanung Hochregallager]]
- [[Ausleuchtungsmessung]]
	- [[Signalstärke]]
- [[WLAN SIND WIR ENDLICH DONE HOLY SHIT]]


## The fucking what HÖR AUF ZU YAPPEN
- [[LoRaWAN]]
	- [[CSS Modulation]]
- [[Wireshark Linux]]
	- [[Register logical network interface]]
