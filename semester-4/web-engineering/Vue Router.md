> [[Routing|Route]] [[HTTP]] traffic to the correct [[Vue Component]]

- Built as a [[tree]] structure: Router uses the [[Vue Component|component]] `RouterView` as an Entrypoint
- `RouterView` uses the Router configuration to render the correct component as its [[Kindknoten|child]]


## Configuration
- `/src/router/index.js`

```js
import { createRouter, createWebHistory } from "vue-router";
import Home from "@/App.vue";
import JoinGame from "@/pages/JoinGame.vue";

const routes = [
    { path: "/join/:gameId", component: JoinGame },
    { path: "/", component: Home },
];

export default createRouter({
    history: createWebHistory(),
    routes,
});
```