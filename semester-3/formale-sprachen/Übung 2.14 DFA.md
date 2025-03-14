[[FSA_Handout.pdf#page=60]]


![[Pasted image 20240918141657.png]]


## 2. Automaten zu Sprachen

![[Pasted image 20240918141805.png]]


```mermaid
%%{init: {'themeCSS':''}}%%
flowchart LR
	__start(( ))
	__start --b--> __start
	__start --a--> 1((1))
	1 --a--> 1
	1 --b--> 2(((2)))
	2 --a--> 1
	2 --b--> __start

```


