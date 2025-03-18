[[Stack]]

- Benutzt für Aufruf von [[Functions]]


> [!info] [[Programm Counter|PC]] als Rücksprungadresse wird in der Regel in [[Register|Registern]] gespeichert, nicht auf den Stack.
## Arbeitsweise
1. push parameters
2. push function address
3. [[8051 Absolute Jump]] (pop function address)
4. pop parameters 
5. do calculations

