> appending `?` to a statement throws its error [[Rust Result Type|Result]]

- can also act as an [[Elvis-Operator]] on [[Rust Option]] (as long as the function also returns an Option)

> [!hint] It's possible to make the `main` [[Function]] return a `Result<(), Error>` which is insane xd

> [!hint] Basically equates to the following structure in [[Java Exception|exception]]-based languages:
> ```java
> try {
> 	someMethodThatThrows();
> } catch (Exception e) {
> 	throw e
> }
> ```

## Example from Rustlings
- `errors2.rs`

```rust
fn total_cost(item_quantity: &str) -> Result<i32, ParseIntError> {  
    let processing_fee = 1;  
    let cost_per_item = 5;  
  
    // here happens error propagation 
    let qty = item_quantity.parse::<i32>()?;  
  
    Ok(qty * cost_per_item + processing_fee)
```