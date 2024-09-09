[[CSS]]

- idea: let's improve the layouting using [[HTML table|tables]]
> [!warning] Columns and rows start at 1!!


## Fraction unit
```css
1 fr; /* fr = fraction */
```


### Grid Container
The highest-hierarchy element of a grid.

Contains template column information:
```css
body {
	display: grid;
	grid-template-columns: 10% 1fr;
	grid-template-rows: 10% 80% 10%;
	gap: .5em;
}
```

Creates a Grid with rows 10% and the remainder (= 90%) height
and 3 rows with size 10%, 80% and 10% respectively


> [!hint] Using `1fr` for the last column will simply fill up the remaining space


### Short notation
- you can use `column-row-end: -1` for the last row as in python
instead of specifying attributes `grid-row-start` and `grid-row-end`, you can use a slash noteation:

> [!warning] Notation uses the table **borders**, not fields!
> A column spanning from 1 to 2 does not inhabit _fields_ 1 and 2, but goes from the first border to the second (= inhabits the first field.)

```css
aside {
	grid-column: 1 / 2;
}
```