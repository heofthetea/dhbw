```rtl
(PC) <- (PC) + #2
(PC) <- (PC _ #rel)
```

- rel ist 8-Bit Zahl im [[Zweierkomplement]]
- $\pm 127$ relativ zum [[Adress-Zähler|PC]]

```asm
SJMP label
```