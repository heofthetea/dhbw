> Simuliere eine Berechnung einer [[Turing Machine]] durch eine [[Folge]] des [[MPKP]]

> [!info] Ansatz: zu einer terminierenden Berechnung auf einer [[Turing Machine]] existiert ein Lösungswort für das [[MPKP]].

> [!warning] Rechtes Wort ist immer eine [[Konfiguration TM|Konfiguration]] weiter als linkes Wort => Endet auf [[Folgekonfiguration]]
> - Wenn [[Turing Machine|TM]] nicht terminiert, wird rechtes wort _immer_ länger sein als linkes Wort => Es gibt keine Lösung


- [[MPKP]] statt [[PKP]] muss verwendet werden, weil man sonst wegen Kopierpaaren immer eine Lösung hätte

## Übersetzung
> [!hint] Übergangspaare werden gebildet wie bei [[Transformation TM zu Typ 0 Grammatik]] 


> [!hint] Löschkonfiguration simuliert eine [[Haltekonfiguration]]
> - LK macht [[Konfiguration TM|Konfiguration]] kleiner => Bis Abschlusspaar angewendet werden kann
> - dient dazu, die Wörter am Ende zu versuchen, gleich zu machen


- Übergangspaare ab 4 sind Für Randfälle, falls Schreib-Lese kopf am Trennsymbol steht

![[Pasted image 20241108111232.png]]


[[Übung 5.38 PKP aus TM]]