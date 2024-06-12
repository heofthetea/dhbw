> E D

- works like a [[child selector]]. except with unlimited depth

```css
body ul {
	
}
```
will select 
```html
<body>
	<section>
		<ul>
		</ul>
	</section>
</body>
```

however a [[child selector]] with specification `body > ul` will not.

