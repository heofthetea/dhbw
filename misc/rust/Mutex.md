---
aliases:
  - Mutual Exclusion
---
[[Semaphor]]

> [!warning] [[Mutex]] itself is not enough, you need another [[Arc]] wrapper to provide thread-safe shared [[Ownership]] of this mutex.

- lock() acquires a [[Semaphor|Lock]]
- the lock is released as soon as its holder is dropped (at least that's how I understood it lol)
```rust
struct JobStatus {  
    jobs_done: u32,  
}  
  
fn main() {   
    let status = Arc::new(Mutex::new(JobStatus { jobs_done: 0 }));  
  
    let mut handles = Vec::new();  
    for _ in 0..10 {  
        let status_shared = Arc::clone(&status);  
        let handle = thread::spawn(move || {  
            thread::sleep(Duration::from_millis(250));  
  
            // this   
            let mut status_inner = status_shared.lock().unwrap();  
            status_inner.jobs_done += 1;  
        });  
        handles.push(handle);  
    }  
  
    // Waiting for all jobs to complete.  
    for handle in handles {  
        handle.join().unwrap();  
    }  
  
    // TODO: Print the value of `JobStatus.jobs_done`.  
    println!("Jobs done: {}", status.lock().unwrap().jobs_done);
```