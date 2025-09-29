---
aliases:
  - Stack
---
[[semester-2/algorithmen/Stack|Stack]]

- Holds [[Variable|Variablen]] in local [[Scope]]
- oder: [[Pointer]] zu [[Program Heap|Heap]]
- Daten müsen in umgekehrter Reihenfolge ausgelesen werden, wie sie angelegt werden -> LIFO

> [!hint] A [[Pointer]] is just a value in the [[Call Stack]] pointing to the [[Program Heap]]

> [!info] [[Programm Counter|PC]] als Rücksprungadresse wird in der Regel in [[Register|Registern]] gespeichert, nicht auf den Stack.

## Arbeitsweise
1. push parametersP
2. [[Stack#push|push]] function address
3. [[8051 Absolute Jump]] ([[Stack#pop|pop]] function address)
4. pop parameters 
5. do calculations

