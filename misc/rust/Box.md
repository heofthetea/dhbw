> A [[Pointer]] [[Ownership|owning]] data on the [[Program Heap|Heap]]


## Example: [[Liste]]
```rust
#[derive(PartialEq, Debug)]  
enum List {  
    Cons(i32, Box<List>),  
    Nil,  
}  
  

fn create_empty_list() -> List {  
    List::Nil  
}  
  
fn create_non_empty_list() -> List {  
    List::Cons(  
        1,  
        Box::new(
	        List::Cons(2, Box::new(
		        List::Cons(4, Box::new(
			        List::Nil
				))
			))
		),  
    )  
}
```