> Core Entity in [[Pandas]]

- 2-dimensional: Rows and Columns
- Zeilen sind [[Total Order|geordnet]]
- variable [[Dimension]] (whatever that means)

> [!hint] Basically [[Instanz einer Relation]] mitsamt [[Schema einer Relation|Schema]]

# [[Object]] treatment

## Attribute
- `columns` -> [[Schema einer Relation]]
- `shape` -> [[Dimension|Dimension]] $(height, width)$
## Operationen
### SQL-esque operations
- `df.iloc[n]` (wo $n$: [[Integer]]) -> Indexierung der $n$-ten Zeile ([[Relation]])
	- supports [[Python Slicing]] 
	-  zweidimensional:`df.iloc[lo_x:hi_x, lo_y:hi_y]` (1. Spalten, 2. Zeilen)
- `df[l]` (wo $l:\ list \subset [columns]$) -> equivalent zu `SELECT l FROM` [[SQL select]]
	- bsp: `df[["Attack", "Name"]]`

### Methods
- `df.sort_values` -> [[Sortieren]] nach [[Attribut]]
- `describe` -> [[Lagemaße]] ausgeben


ACH DIGGA ICH HAB KEINEN BOCK MEHR ES IST SO LANGWEILIG HOLY SHIT