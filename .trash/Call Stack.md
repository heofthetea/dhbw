[[Stack]]

- Benutzt für Aufruf von [[Function|Funktionen]] & deren Parameter
- Daten müsen in umgekehrter Reihenfolge ausgelesen werden, wie sie angelegt werden -> LIFO

> [!hint] A [[Pointer]] is just a value in the [[Call Stack]] pointing to the [[Program Heap]]

> [!info] [[Programm Counter|PC]] als Rücksprungadresse wird in der Regel in [[Register|Registern]] gespeichert, nicht auf den Stack.
## Arbeitsweise
1. push parameters
2. push function address
3. [[8051 Absolute Jump]] (pop function address)
4. pop parameters 
5. do calculations

