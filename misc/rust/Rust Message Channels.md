[[Prozesskommunikation]], [[Message-based Kommunikation]], [[Rust Threads]]

> [!hint] Rust advises using channels (i.e. [[Message Queue|Message queues]] for communication instead of shared state using [[Mutex]].

```rust
use std::sync::mpsc;
use std::thread;

fn main() {
    let (tx: Sender<&str>, rx: Receiver<&str>) = mpsc::channel();

    thread::spawn(move || {
        let val = String::from("hi");
        tx.send(val).unwrap();
    });

    let received = rx.recv().unwrap();
    println!("Got: {received}");
}
```



## Tokio mpsc
- multiple-publish-single-consumer

```rust
 let (tx: Sender, rx: Receiver) = mpsc::channel(10000);
 tx.send(msg).await;
```

- the number inside the channel initializer is the **amount of messages** that are contained
- This is a [[Ring Buffer]] => once full, we just overwrite again

> [!hint] since this is bounded, there may not be space, which is why sending is an [[asynchronous]] operation. There's also **unbounded** channels (without a fixed size) where this is not the case, however these are less performant (needs scaling logic etc.)

