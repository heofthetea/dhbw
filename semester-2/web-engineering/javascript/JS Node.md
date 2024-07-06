- tweak the [[DOM Tree]] using [[JavaScript]]
--> [[document keyword|innerHTML]] in _waaayyyyy_ more powerful (use for calculator lol)

```js
const header4 = document.createElement("h4");
const node = document.createTextNode("This is new.");
header4.appendChild(node);


const element = document.getElementById("div1");
element.appendChild(header4)
```
--> First set Content, then nest those within each other
(the `node` part probably could also be done using `innerHTML`)

> [!hint] You can also remove child notes etc.

> [!warning] This usually is pretty bad practice.
> Use `display: none;` instead

