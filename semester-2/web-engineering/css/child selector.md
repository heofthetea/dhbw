> E > C


[[DOM Tree]]
Select all elements _of a certain type_ that are [[child node]] of a certain other type

> [!warning] Only selects Child Elements with a depth of $1$!!
> In example below: If a list is nested again in e.g. a [[HTML Section]], it won't be selected.

```css
body > ul {
	list-style-type: square;
}
```
- Selects all [[HTML list#Unsorted List|unordered Lists]] that are a child element of [[HTML body|body]] 