[[Kontextfreie Sprache]]

- [[Wortproblem]]: [[CYK Algorithmus]]
- [[Leerheitsproblem]]: Ist [[Startsymbol]] terminierend?
- [[Endlichkeitsproblem]]: nur [[Reguläre Sprache|reguläre Sprachen]] sind [[endliche Sprachen|endlich]] 
- [[Äquivalenzproblem]]: nicht entscheidbar für [[Kontextfreie Sprache]]


## Leerheitsproblem
überprüfe, ob [[Startsymbol]] terminiert => [[Reduzierte Grammatik]]


## Äquivalenzproblem
- Beide Sprachen sind [[Determinismus|deterministisch]] kontextfrei (können durch einen deterministischen [[Kellerautomat|Kellerautomaten]] erkannt werden)
- Die dinger sind abbgeschlossen unter dem Komplement

[[Reduktion]] des [[Disjunktheitsproblem|Disjunktheitsproblems]]:
$$L(G_{l}) \land L(G_{r}) = \varnothing$$
$$\Longleftrightarrow L(G_{l}) \subset \overline{L(G_{r})}$$
$$\Longleftrightarrow L(G_{l}) \subset L(\overline{G_{r}})$$
$$\Longleftrightarrow L(G_{l})\cup L(\overline{G_{r}} = L(\overline{G_{r}}))$$
$$\Longleftrightarrow L(G_{\cup}) = L(\overline{G_{r}})$$
(angefangen bei [[Disjunktheitsproblem]]; geendet bei Äquivalenzproblem)