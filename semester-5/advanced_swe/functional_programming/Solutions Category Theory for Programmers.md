> Solutions for [[category-theory-for-programmers.pdf]]


## Chapter 1
### 1. Implementation of [[Identity Function]]
```rust
fn identity<T>(T: x) -> T {
	x
}
```

### 2. Implementation of [[Composition]]
- well... takes a [[Rust function pointer]] and returns a [[Rust closure]]
```rust
fn composition<A, B, C>(f: fn(a: A) -> B, g: fn(b: B) -> C) -> impl Fn(A) -> C {
	move |x: A| g(f(x))
}
```

### 3. Test that Composition Function respects Identity
```rust
fn main() {
	fn f(a: i32) -> i32 {
        a + 2
    }
    fn g(a: i32) -> i32 {
        a + 3
    }
    assert_eq!(composition(f, identity)(4), 6);
    assert_eq!(composition(identity, g)(4), 7);
}
```

#todo 4, 5 ,6


## 2. Types and Functions
#todo 

## 3. Categories great and small
### 1. [[Free Construction|Free Categories]] from [[Graph|graphs]]
#### one node, no edges
> [!hint] [[Identity Morphism]]: $id_{A} \circ id_{A} = id_{A}$
> => Equal morphisms are obviously not drawn twice


![[Pasted image 20251014110218.png]]


#### one node, one edge
  ![[Pasted image 20251014110739.png]]

#### two nodes, one edge
![[Pasted image 20251014110909.png]]

#### Graph with edges representing the alphabet
- infinitely many [[Morphism|morphisms]] that model $\Sigma^{*}$ ([[Operationen auf Sprachen#Klenee-Stern]])
![[Pasted image 20251014111059.png]]

### 2. Orders
#### a)
- set of sets with Inclusion [[Relation]]: $A$ is included in $B$ if $\forall_{a \in A}a \in B$ 
- => the order of [[Teilmenge|Subsets]]
- i'd say [[Partial Order]] 
	- not a [[Ordnungsrelation|Preorder]] because: $A \subset B \land B \subset A \Longrightarrow A = B$
	- not a [[Total Order]] because not all sets are in relation with each other

#### b) C++ magic
- [[Inheritance]] (Subtypes can stand in for their parent classes)
- certainly not a total order (not all types are in relation)
- maybe a partial order -> is it possible to interchange to subclasses in C++? (in [[Java]] it's theoretically possible by usage of interfaces)
	- but I'd say no so [[Partial Order]]