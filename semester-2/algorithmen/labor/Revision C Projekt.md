- Idee: Liste anlegen
	- Next let's make it scale
	- then measure the time that takes lul

--> Create a [[Doubly Linked List]]
Measure how long it takes to create a list with $10^n$ elements


| elements       | time taken (s) |
| -------------- | -------------- |
| $10^4$         | $0.002730$     |
| $5 \cdot 10^4$ | $0.009025$     |
| $10^5$         | $0.020286$     |
| $5 \cdot 10^5$ | $0.109721$     |
| $10^6$         | $0.203814$     |
| $5 \cdot 10^6$ | $1.045936$     |
| $10^7$         | $1.713962$     |
| $5\cdot 10^7$  | $7.465750$     |

logarithmic scale:
![[Pasted image 20240516144531.png]]

with a non-logarithmic scale:
![[Pasted image 20240516145842.png]]

credits to chatgpt lol


### Analyse
-> [[exponentielle Laufzeit]]
```c
void add_to_list(Show *s, List *list)
{
    if (list->length == 0)
    {

        list->head = new_node(s, NULL, list->tail);
        list->tail = list->head;
    }
    else
    {
        list->tail->next = new_node(s, list->tail, list->tail->next);
        list->tail = list->tail->next;
    }
    list->length++;
}
```
**Was**? Hinten angefügt
**Wie**? Immer vom Tail an gearbeitet