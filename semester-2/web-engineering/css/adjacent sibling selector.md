> E1 + E2

- Selects all elements, that follow _directly_ to another element.
### Example
```css
h2 + ul {}
```
Selects all <span style="color:rgb(0, 122, 255)">unordered lists</span>, that directly follow an <span style="color:rgb(0, 122, 255)">h2</span> tag


#### selects
```html
<h2>
	<ul>
```

#### does not select
```html
<h2>
	<h3></h3>
	<ul>
```
Because the `h3` causes the list and the `h2` to not be directly adjacent to one another