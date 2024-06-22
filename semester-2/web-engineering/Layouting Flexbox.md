[[Flexbox]]

```css
flex-direction: row | column | row-reverse | column-reverse;
flex-wrap: nowrap | wrap;
```


==> combine both attributes:
```css
flex-flow: row wrap;
```


![[Pasted image 20240617133212.png]]

> [!hint] Default [[HTML]] without [[Flexbox|flex boxes]] is equivalent to `column`.

### flex wrap
- allow the browser to put the individual boxes to appear below one another, if the window width is too small.
--> makes very sense