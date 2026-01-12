---
aliases:
  - ECS
---
- aus der Welt des Game Developments
	- weil: Viele [[Object|Objekte]] (Components) und hohe Anforderungen an FPS Performance
- Entkoppelt Logik von Daten ("undo OOP")
- Nachteil von OOP: [[Cache]]-lokalität geht kaputt durch Virtual [[Methode|Methods]]
	- + Overhead durch GC etc.

> [!hint] Verheiratet sich gut mit [[Functional Programming|FP]]

> [!error] Worst Case: Ganz viele [[#System|Systeme]] mit jeweils einer [[#Entity]]
> => In dem Fall wird's nervig, deswegen dann eher [[OOP]]


> [!info] **Motivation**: traditionell [[Inheritance]] tree (Vehicle extends DrawableGameObject extens GameObject)
> Diamond Problem: Hovercraft erbt von WaterVehicle und LandVehicle, welche beide von Vehicle erden

![[Pasted image 20251202130201.png]]
## Entity
- Sind nur ein [[Pointer]] auf Components
	- dort steht dann: position, velocity, etc.

## Component
- z.B.
	- Velocity
	- Position
	- Model

=> Aktion von den Daten getrennt

## System
- Sind die Aktionen ([[Function|functions]])
- Beispiel:

```c
pos.x = pos.x + v.dX
pos.y = pos.y + v.dY
```

=> kann für _alle_ Componenten gemacht werden, unabhängig zu welcher Entität sie gehören

## Beispiel Cubes
```rust
struct Cube {
	dx: i64,
	dy: i64,
	t: Duration
}
```
- dx/dy: Position
- t: Cooldown zwischen Bewegen
- dieses Struct ist ein Component

> [!hint] Entities sind einfach [[Call Stack|Stack]]-Pointer auf einen Cube-Component