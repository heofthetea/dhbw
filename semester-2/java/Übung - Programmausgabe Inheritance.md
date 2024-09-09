![[2023-Java-Slides.pdf#page=81]]

[[Inheritance]], [[Polymorphism]], [[Java Scopes]], 



## What actually happens
```mermaid
flowchart TB
subgraph S1[ ]
	direction TB
	A[i = 4]
end

subgraph S2[ ]
	direction TB
	A2 --> B2[prints 30]
	B2 --> C2[i += 5]
	C2 --> D2[Sichtbarkeit2.printInt]
	D2 --> PrintInt[print 35 + 5 = 40]
end


subgraph S3[ ]
	A3[print 5 + 10]
end


main[main] --> Constructor[Constructor]
Constructor --> A
Constructor --> Superconstructor[call to super constructor]
Superconstructor --> A2[i = 30]
Superconstructor --> printSuperInt[printInt of super class]
printSuperInt --> A3


```

and so on idgaf anymore
Mermaid is _kinda_ cool but lacks fine-grained control

idk it's 5 - 40 - 15 - 16 for some fucking reason

## My own wrong solution
![[Pasted image 20240521144802.png]]
(the last step forgot that the `printInt()` method adds another 5 to the input lol
### Output
Okay bro fuck you forgot the call to the Default Constructor of the parent
```
15
16
```