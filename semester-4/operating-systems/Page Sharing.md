> [[Page|Pages]] von verschiedenen Programmen benutzt werden können

- [[Betriebssystem]] kopiert sehr viel im [[Memory]]
- Programme können äquivalente [[Page|Pages]] generieren

=> [[MMU]] verweist auf eine [[Page]], wenn [[Daten]] überdecken

---

[[Copy on Write]] - Shared Pages werden readonly
- ein Write löst [[Interrupt]] aus => dann wird kopiert