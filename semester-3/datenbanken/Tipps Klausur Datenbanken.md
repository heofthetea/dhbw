- [[Beispiel Softwarehaus Miniwelt|Miniweltbeschreibung]] wird dran kommen --> mach [[ERM|ERM]] draus


## Frage an Stark DIGGA JETZT VERSTEH ICH SELBER NIX MEHR
Guten Abend Herr Stark, 
ich habe eine tiefgreifende Verständnisfrage zur logischen Implikation unseres Tests auf 3NF.

Ihre Definition im Skript lautet wie folgt:
"Eine Relation ist in 3NF, wenn sie in 2NF erfüllt und keine transitive Abhängigkeiten zwischen einem **Nichtschlüsselattribut** und einem **Schlüsselkandidaten** bestehen."

In unserer Prüfung auf 3NF mit dieser Tabelle überprüfen wir jede FA $X \rightarrow \alpha$ der Relation. Hierbei prüfen wir aber schwächere Anforderungen, als die Definition fordert:
- die Domäne X ist ein Superschlüssel, oder
- $\alpha$ ist prim (= Teil eines Schlüsselkandidaten).

Dass diese Anforderungen schwächer sind, folgt für mich aus der Tatsache, dass jeder Schlüsselkandidat ein Superschlüssel ist. (Also auch jedes )

Diese Implikationen gelten aber, in beiden Fällen nicht umgekehrt.
