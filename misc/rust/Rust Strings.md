> There are two types of [[String]]s: `String` and `str`


| String                                    | str                                            |
| ----------------------------------------- | ---------------------------------------------- |
| is [[Ownership\|owned]] chunk of the heap | is a [[Rust slice\|slice]] -> stored elsewhere |
| mutable (i.e. growable, shrinkable)       | [[Immutability\|immutable]]                    |
|                                           | almost always [[Borrowing\|borrowed]]          |

> [!hint] Rust's Strings support [[Konkatenation]] through `+`.