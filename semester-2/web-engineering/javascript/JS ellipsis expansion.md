> Expands all [[Dictionary|Key-value pairs]] of an [[Object]].


> [!hint] Allows for overwriting of only _some_ of the object's attributes, allowing for usage with [[Immutability|immutable]] [[Functional Programming]].

```js
const obj = {
	id = 42,
	msg = "hello world"
}
const myObject = {
	...obj,
	msg = "hello universe"
}
```

> [!hint] `myObject.id` will be 42, but `myObject.msg` will say " hello universe".