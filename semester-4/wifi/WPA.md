> [[WLAN|WI-FI]] Protected Access


- Wurde nachgetragen - erster Sicherheitsansatz [[WEP Encryption|WEP]] war halt scheise nh
- Schlüsselhierarchie aus [[Pairwise Key]]s: [[Pairwise Master Key]], [[PairwiseTransient Key]], Keys für Schlüssel- und Datenübertragung
- nutzt [[TKIP Encryption]]

### Anforderungen
1. Pakete müssen [[symmetric Encryption|verschlüsselt]] und [[Goals of Cryptography#Authenticity|authentifiziert]] sein
2. Jeder [[Cryptographic Key|Schlüssel]] wird nur für ein [[Paket]] verwendet
3. Die [[Paket|Pakete]] müssen eine **unveränderbare** Sequenznummer tragen => keine Wiederholungen
4. Kommunikationspartner müssen sich gegenseitig authentifizieren