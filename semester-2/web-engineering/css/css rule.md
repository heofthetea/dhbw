```css
selector {
	attribute: value;
	attribute: value;
}
```

The [[CSS selector]] refers to any element in an [[HTML]] [[DOM Tree]]. Can be a [[HTML class]], [[HTML id]], or a [[HTML essential tags|HTML tag]]. 

- A CSS attribute can have multiple values 
	- possible because some attributes (e.g. `border`) are really just wrappers for multiiple different attributes
### use multiple selectors
```css
table, th, tr, td {  
	border: 1px solid black;  
	border-collapse: collapse;
}
```


> [!warning] The attribute specification the **futhest down** in the [[DOM Tree]] gets actually evaluated by the [[Browser]]!!
