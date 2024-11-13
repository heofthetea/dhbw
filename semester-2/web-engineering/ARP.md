> **A**dress **R**esolution **P**rotocol
> Dient zur Gewinnung der Ziel-[[MAC Adresse]] durch die Ziel-[[IP Adresse]].

1. Sender schickt [[Broadcast]]: "Wer hat diese [[IP Adresse|IP Adresse]]?"[^1]
2. Antwort (als [[Unicast]]): "Hi das ist der da" (oder: "hi das bin ich")

![[Pasted image 20241113104719.png]]

- Wird - oh wunder - in einer [[Lookup Table|Tabelle]] gespeichert -> Einträge sind zeitlich begrenzt

> [!hint] `arp -a` lists all [[ARP]] entries of my machine

### Ablauf
- Source: muss nur [[MAC Adresse]] seines [[Default Gateway]] wissen
- Jeder [[Router]]: Fragt "wer kennt die [[IP]]" => Ändert Quell-und Ziel [[MAC Adresse]] entsprechend
	- ABER: [[IP Adresse]] bleibt konstant!!

[^1]: Nutzt die [[Broadcast]] [[MAC Adresse]]: `FF:FF:FF:FF:FF:FF`