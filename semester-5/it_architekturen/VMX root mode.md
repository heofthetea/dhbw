> Ring -1 in der [[x86 Rings of Protection]]
> Hier läuft [[Hypervisor]]

- die 17 problematischen Instruktionen aus [[Arten von Instruktionen]] können in Ring 0 weiter verwendet erden

![[Pasted image 20251031105454.png]]


## How it works
- [[Hypervisor]] "programmiert" die [[CPU]] um
- es ist basically [[Prozess Scheduler|Process Scheduling]] eine Ebene weiter unter

> [!hint] [[CPU]] springt quasi die ganze Zeit zwischen Ring -1, 0 und 3 hin und her

![[Pasted image 20251031105707.png]]