- Allows parent component to listen to events emitted by the child component

## Example
#### parent
```vue
<BulkChange
  v-if="dialog"
  v-bind="_formConfig"
  :selectedItems="selectedItems"
  @close="close"
  @submitted="relaySubmit"
/>
```

## child (`BulkChange`)

```javascript
<script setup>
const emit = defineEmits(["close"]) // define emit values
emit("close")

</script>
```

```js
this.$emit("close")
```
emits the "close" event, which triggers the `@close` event listener in the parent, which in turn calls the `close()` function