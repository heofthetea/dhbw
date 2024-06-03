```python
training = 5_600_000 + 3_500_500
projekte = 2_000_000
vertrieb_afrika = 2_500_000 + 2_000_000 + 1_500_000
vertrieb_a2 = 3_600_000
vertrieb = vertrieb_afrika + vertrieb_a2 
werbung_afrika = 5_500_000
werbung_a1 = 4_500_000
werbung_a2 = 7_000_000
werbung = werbung_a1 + werbung_a2 + werbung_afrika
produktion_a1 = 610_000
produktion_a2 = 290_000
stückzahl = produktion_a1 + produktion_a2
mafos = 1_500_000 + 3_200_000 + 2_000_000


preis_avg = (450 + 450 + 450) / 3

herstellkosten = 237 * stückzahl

selbstkosten = training + projekte + vertrieb + werbung + herstellkosten + mafos

print(selbstkosten)
print(selbstkosten/stückzahl)
```


[[per5.py]]