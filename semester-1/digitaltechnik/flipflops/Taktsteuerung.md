> def _Takt (Clock)_: Signal, dass in regulären Abständen zwischen $0$ und $1$ wechselt

[[Flipflops|Regulärer Flip-Flop]] wird um einen Eingang _T_ (= Takt) oder _C_ (= Clock) erweitert
-  T-Eingang wird mit bereits existierenden Eingängen _verundet_ 
	==> Dadurch kann Ausgang _nur_ verändert werden, wenn $T = 1$
	- $T = 0$ ==> [[Speicherfall]]
### Taktzustandsteuerung
Takt ist [[Flipflops#Statisch|statischer]] Eingang

Beispiel: [[Taktgesteuertes SR-Flipflop]]


### Taktflankensteuerung
Takt ist [[Flipflops#Dynamisch|dynamischer]] Eingang
Zur Steuerung werden [[Impulsglied]]er verwendet

Beispiel: [[JK-Flipflop]]

## Dominierende Eingänge
Norm: 
- _Buchstabe Zahl_ --> Dominierender Eingang
- _Zahl Buchstabe_ --> Dominierter Eingang
- Ein dominierender Eingang dominiert die Eingänge, die dieselbe Kennzahl haben!

![[sr_ff_taktgesteuert.png]]
