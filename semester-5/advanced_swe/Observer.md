> Entkopplung von Model und view

-> View ist [[Observer]] 

> [!hint] Ist basically [[Event-driven Architecture]] durch die Hintertür. Heutzutage am häufigsten realisiert mit [[Message Queue]]

- [[Interface]] `IObserver` -> Observable ruft `Notify()` auf
![[Pasted image 20251014124549.png]]