
**Idea**: 
- set node successor of _previous_ to _next_
- set node predecessor of _next_ to _previous_
- then delete current node using `free`
- to ensure that the _exact_ element gets deleted:
	- give id's to elements


Differientiation between 3 cases:
1) _Node in the middle_: node->next exists _and_ node->previous exists
2) _Node at start_: node->next exists _and_ node->previous does not exist
	1) check for nonexistent is irrelevant because of `else` clause
3) _Node at end_: node->next does not exist _and_ node->previous exists
	1) again: check for nonexistence irrelevant because of `else` 
4) _Node is the only node_ 
```c
void delete_node(List *l)
{
	
	if(l->current) {
		if(l->current->after && l->current->previous) 
		{
			l->current->previous->next = l->current->next;
			l->current->next->previous = l->current->previous;
			free(f->current);
		}

		else if(f->current->next) 
		{
		
		}
		else if(f->current->previous)
		{
		
		}
		else
		{
		}
	}

}

``` 