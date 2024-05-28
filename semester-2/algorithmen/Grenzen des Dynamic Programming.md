[[Travelling Salesman Problem]]
TSP hat überlappende Teilprobleme, aber _keine überlappende Substruktur_!!

Es ist möglich, dass bester Weg von 1-4 über 
```mermaid
flowchart LR
1 --> 2
2 --> 3
3 --> 4 
4 --> 1
```
gegeben ist, aber für 1- 5 über

```mermaid
flowchart LR

1 --> 5
5 --> 3
3 --> 4
4 --> 2
2 --> 1
```

Liegt daran, dass der TSP-Graph ein [[Gewichteter Graph]] ist.
