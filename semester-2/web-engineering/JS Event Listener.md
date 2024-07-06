[[HTML button]] onClick

- `onchange`
- `onclick`
- `onmouseover`
- `onmouseout` - user moves mouse away from tag
- `onkeydown` - user pushes a specific key
- `onload` - browser finished loading a page
- ... and much more lol
> [!info] Each of those attributes have their own [[HTML]] property!

[[JS get Element by id]], [[JS alert]], [[Lambda expressions]]
```js
document.getElementById('my-id').addEventlistener("click", my_function);

element = document.getElementById();
element.addEventListener("click", () => {
	alert("Hello World");
});
```

> [!hint] If multiple Event Listeners exist for the same event, **all** of them are executed.