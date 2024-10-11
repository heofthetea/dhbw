> Einteilung von [[Sprachklasse|Sprachklassen]]

| Typ | [[Grammatik]]               | [[Sprache]]                      | [[Automat]]                                           | Besondere Regel                                                       |
| --- | --------------------------- | -------------------------------- | ----------------------------------------------------- | --------------------------------------------------------------------- |
| 0   | [[Unbeschränkte Grammatik]] | [[Rekursiv aufzählbare Sprache]] | [[Turing Machine]]                                    | -                                                                     |
| 1   | [[Monotone Grammatik]]      | [[Kontextsensitive Sprache]]     | Nichtdeterministischer linear beschränkter Automat ?? | Ein Wort kann nicht kürzer werden                                     |
| 2   | [[Kontextfreie Grammatik]]  | [[Kontextfreie Sprache]]         | [[Nichtdeterministischer Kellerautomat]]              | auf der linken Seite darf nur ein [[Nichtterminalsymbol\|NTS]] stehen |
| 3   | [[Rechtslineare Grammatik]] | [[Reguläre Sprache]]             | [[Endlicher Automat]]                                 | Alle Regeln dürfen maximal die Form $A \rightarrow cB$ besitzen       |


> [!hint] Je _höher_ der _Typ_, desto _restriktiver_ die [[Grammatik]] und _weniger mächtig_ die [[Sprachklasse]]

## Diagramme

![[Pasted image 20241009135314.png]]

![[Pasted image 20241009135400.png]]