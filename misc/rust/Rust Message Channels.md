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


