> Security Assertion Markup Language

[[SSO]]

- ältestes [[SSO]] Protokoll (v2 ~25 Jahre)
- für Enterprise Anwendungen

## Basiert auf XML
- je ein Metadata XML document für [[IDP]], und für [[Client]]
	- steht drin: was darf die Anwendung, was soll sie tun ([[Digital Signature]] etc.)
	- Wo findet der [[Client]] Aktionen (Login, logout, etc..) ([[URL]])
	- [[Public Key]] für Verifizierungen
> [!hint] Metadata documents werden auch verwendet als Art "Client identification"

### Assertion
- Die Daten, die wir übergeben haben (vgl. JWT [[Claim]])