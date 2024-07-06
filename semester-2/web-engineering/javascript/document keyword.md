```javascript
document
```
- Refers to the [[DOM Tree]] the Script attaches to
- used to manipulate the document

--> [[JS get element by id]]

### How to manipulate
- manipulate the visible content (`innerHTML`)
```js
document.getElementById("my-id").innerHTML = "Hello World";
document.getElementById("my-id").style.attribute = "attribute";
```

> [!warning] Assignments always need to happen as string!!