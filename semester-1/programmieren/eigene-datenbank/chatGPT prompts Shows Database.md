## 1. File Handling
Consider the following structure in C:
```c
typedef struct
{
    char date[17];
    char venue[20];
    char headliner[20];
    char support_acts[64];

} show;
```
As you can see, this is a very elementary representation of a concert. The greater scope of the program consists of storing a bunch of these in a custom linked list, and letting a user mess around with the data via cli.

A part of this program is to store data in an external file, to enable it to persist when the program is closed and started again. As part of this, of course, the program has to both _write_ to a file _and_ read one. Your task is to write these two functions: One called `read_from_file()`and the other wone called `write_to_file()`. Use the c `<stdio>` library for this, and write/read using `fgets` and `fputs` - This way the file will be readable when opened in whatever text editor.

To do so, you'll need knowledge of the linked list structure I have implemented. Note that all iterations over the list have been implemented recursively, however I think doing so _in the specific case of reading and writing to a file_ will make things more complicated than they need to be, so please use an iterative approach. Here's the relevant code vor the Linked List:

```c
typedef struct Node
{
    show *data;
    struct Node *next;
    struct Node *previous;
} Node;

// example of a recursive approach for iterating over the list
void __print_datasets(Node *n, int index)
{
    show *s = n->data;
    printf("\nnode %3d: %-17s %-20s %-20s %-128s", 
	    index, 
	    s->date, 
	    s->venue, 
	    s->headliner, 
	    s->support_acts);
    if (n->next == 0)
        return n;
    return __print_datasets(n->next, index + 1);
}
```
