[[C]]
## Arrays
[[Array]]
**You know what an array is, you're only here for the syntax**
### character array
**Strings need ending character** ==> `char[64]` can only hold 63 characters

Beispiel: Temperatur
- stets drei Messwerte pro Tag (mogen, mittag, abend)
```c
//one-dimensional
int temperature[3];
temperature[0] = 10;

//two-dimensional
int temperatureWeekly[7][3];
temperature[4][2] = 15;

//three-dimensional
int temperature_yearly[52][7][3];
temperature_yearly[48][3][1];
```

**Achtung** keine Exceptions
--> no `IndexOutOfBounds`
==> acesses something not part of the arrey:
1. allowed to access -> writes somewhere it shouldn't be
2. not allowed to access memory -> Acces Right Violation

