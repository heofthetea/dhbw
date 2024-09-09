#analysis-aufgabe
## Aufgabenblatt
```expander
path:analysis/aufgaben file:"Aufg-16_Stetigkeit"
```
[[Aufg-16_Stetigkeit.pdf]]


## Bearbeitung
```expander
path:goodnotes file:"Aufg-16_Stetigkeit"
```
[[Aufg-16_Stetigkeit Bearbeitung.pdf]]



### [[Binary Search]] for NST
[[binary_search_nst.py]], [[bs_nst_plot.py]]

```python
def solve(lo, hi):
    med = average([lo, hi])

    if abs(f(med)) < 1e-4:  # we definitely won't reach it exactly
        return around(med, decimals=4)

    if f(med) < 0:
        return solve(med, hi)
    if f(med) > 0:
        return solve(lo, med)

nst = solve(1.2, 2.25)
print(nst)
```

--> Data Points:
![[bs_plot.png]]
```python
low_x = [1.2, 1.725, 1.9875, 2.11875, 2.184375, 2.184375, 2.184375, 2.1925781250000003, 2.1966796875000005, 2.1987304687500004, 2.199755859375, 2.199755859375]
low_y = [-0.38, -0.05, -0.72, -0.62, -0.17, -0.17, -0.17, -0.08, -0.04, -0.01, -0.0, -0.0]

high_x = [2.25, 2.25, 2.25, 2.25, 2.25, 2.2171875]
high_y = [0.73, 0.73, 0.73, 0.73, 0.73, 0.22]
```

Auffälligkeit: 
1. Obere Grenze bleibt gleich, weil NST sehr nah an oberer Intervallgrenze liegt
2. Graph hat in der Wirklichkeit zwei weitere Nullstellen, die [[Binary Search]] nicht erkannt hat
	==> liegen zu nahe beieinander, damit Verfahren sie findet
	Könnte behoben werden, indem man Intervall in jedem Schritt durch 3 teilt

![[Pasted image 20240615181305.png]]