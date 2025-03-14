> Network Adress Translation
> auch genannt: **PAT**: Port Adress Translation

$$local:port \rightarrow intl:port$$

![[Pasted image 20241113103645.png]]


### Szenario A
X -> Y
- $A$ übersetzt due Quell-IP ($.77$) in eine international gültige [[IP Adresse]], zusammen mit [[Port]]

### Szenario B
Y -> X
- $A$ bekommt Nachricht mit Ziel $200.1.1.1$ => muss es zurück mappen
- $A$ schaut in seiner [[NAT]]-Tabelle nach, um das Zeug zu mappen