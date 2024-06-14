[[shows.c]]
[[chatGPT prompts Shows Database]]

![[Datenbank Ideen#Idee 2]]

[[Shows Database Code]]

# Linked List implementation

## TODOS
#### General
- [x] fix reading last line twice bug
- [x] stop using _numbers_ to control actions, **YOU'RE WRITING A FUCKNG CLI, NOT A NOKIA PHONE APPLICATION**
- [x] use controlled "end of string" characters and look for them manually via for-loop
- [ ] HANDLE YOUR BULLSHIT FILE HANDLING
- [x] actually make this bullshit a [[Doubly linked list (global variables)]] fucking idiot
- [ ] [[Hoare Partitioning]]
- [ ] 
#### Tasks until 25.01.
- [x] Menu
- [x] manual data entry
- [x] read from file
- [x] print all datasets
## Linked List
> Because I'm stupid, I implemented the _functionality_ of the [[Doubly linked list (global variables)]] the same as a [[Singly Linked List]]. Since this is, _obviously_, complete bollocks, I'll go ahead and change that. I'm way too lazy to update the documentation tho - Most stuff stayed the same _anyway_, except there's now a `list->` before everything. #pointerhell 
#### Data Structure

##### Node
> This is what actually makes up the linked list.
```c
typedef struct Node
{
    show *data;
    struct Node *next;
    struct Node *previous;
} Node;
```

##### Show Struct
> The data type that represents each entry to the database.
```c
typedef struct
{
    char date[17];
    char venue[20];
    char headliner[20];
    char support_acts[64];
} show;
```
#### Operations
##### Creating a node
Basically serves as a _constructor_ of some sorts.
```c
Node *new_node(show *data, Node *previous, Node *next)
{
    Node *new = malloc(sizeof(Node));
    new->data = data;
    new->previous = previous;
    new->next = next;

    return new;
}
```

##### Get last node in list
Knowing the last node in a List is required for appending elements to the list. The last element can be foun very easily using recursion: The entry point is set to any node (usually of course it is set to the starting node of a given list). If the element currently observed has a successor, the function is called again with said successor being the next element observed.
```c
Node *get_last_node(Node *n)
{
    if (n->next == 0)
        return n;
    return get_last_node(n->next);
}
```

##### Appending
First a gatekeeper statement handles the edge case of the passed list being empty. If this is not the case, [[#Get last node in list]] is called and the new node created according to the principles of a [[Doubly linked list (global variables)]]. 

_Return_ - returning the list is necessary because of the edge case of the list being empty. Thus, the list will _always_ have to be passed and returned - not too clean, but necessary.
```c
Node *add_to_list(Show *s, Node *list)
{
    if (!list)
    {
        list = new_node(s, 0, 0);
        return list;
    }
    Node *last = get_last_node(list);
    last->next = new_node(s, last, last->next);

    return list;
}
```
This is of course slower than globally storing the current _tail_, because each time something new is appended to the list, [[#Get last node in list]] has to be called. Also, this kind of ruins the entire point of having a _doubly_ linked list, because we're only working with the _next_ pointer anyway. Fuck it, this is how I implemented it, I'm not changing anything xd


## Database functionalities
To keep the code at least half-way consistent (and cool lol), I use [[Recursion]] as much as I can whenever iterating over a list. However, since Recursive functions need to call themselves and thus get executed however-many times, whenever there's something that only needs to be executed _once_ (like "table headings" when listing all elements of the database), that needs to happen somewhere else.
--> This leaves exactly _two_ ways of doing things:
1) Clutter the main function with a whole bunch of print statements, rendering the giant `switch-case` statement _completely_ unreadable
2) Having "wrapper functions" for every functionality utilizing recursion. Meaning there's a `function()` that is called from `main`, and a `__function()`, that gets called from `function()`, handling all the recurrsive stuff.

I ultimately went for 2), Since the code is already cluttered with functions anyway (due to the linked lists needing a whole bunch of shit). This is why more or less every core functionality consists of 2 methods.

#### 2. Manually enter a dataset

#### 3. View alll datasets
Same principle: `print_datasets()` handles the UI, `__print_datasets()` deals with the recursive output to the console. The recursive iteration follows the same principle as [[#Get last node in list]].
```c
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

void print_datasets(Node *db)
{
    printf("\n          %-17s %-20s %-20s %-128s", "date", "venue", "headliner", "support acts");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------");
    __print_datasets(db, 0);
    printf("\n\n");
}
```

#### -1. up_hex()
The name is completely stupid. So stupid in fact, that I decided to elevate it to _"meme"_ and use it in my code, because why the heck not.
> This is basically the recursive equivalent to [[Doubly linked list (global variables)#output of list data|up_hex() from lessons]]. 

As described above, `up_hex()` is what is getting called from `main`, and `__up_hex()` is what actually handles the business. This really is _exactly_ the same approach as for [[#Get last node in list]], except we print the [[#Show Struct]] of every [[#Node]] we visit.
```c
void __up_hex(Node *list, int index)
{
    printf("\nelement %3d: %20s %10x %10x",
           index,
           list->data->headliner,
           list->previous,
           list->next);
    if (!list->next)
        return;
    return __up_hex(list->next, index + 1);
}

void up_hex(Node *db)
{
    printf("\nelement      %20s %10s %10s", "headliner", "previous", "next");
    printf("\n-------------------------------------------------------");
    __up_hex(db, 0);
    printf("\n-------------------------------------------------------\n");
}
```

### File Handling
The functions prompt the user to enter, which file is read from / written to. However, for now everything is stored in [[db.txt]]
#### Writing to file
This more or less is a rewrite of [[#3. View alll datasets]]. However, in this case, an _iterative_ approach is used to circumvent possible problems arising by not closing the file.

Keep in mind that Everything is stored in the following order:
1) date: $17$ characters
2) venue: $20$ characters
3) headliner: $20$ characters
4) support_acts: $64$ characters

```c
void write_text_file(Node *db)
{
    char filename[16];
    printf("Enter name of file to write to: ");
    scanf("%s", filename);
    fflush(stdin);

    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        fprintf(stderr, "\nError opening file for writing: %s\n", filename);
        return;
    }

    Node *current = db;
    int index = 0;

    while (current != NULL)
    {
        Show *s = current->data;
        // lul this really does the exact same as printing to console xd
        fprintf(file, "%-17s%-20s%-20s%-64sX\n",
                s->date, s->venue, s->headliner, s->support_acts);
        current = current->next;
        index++;
    }

    fclose(file);
    printf("\nSuccessfully wrote %i lines to file %s!\n\n", index, filename);
}
```
[[chatGPT prompts Shows Database#1. File Handling]]

Note that the first 4 lines only serve processing user input. All actual writing logic happens below.

#### Reading from File
##### Reading from the text file
```c
Node *read_text_file(Node *db)
{
    char filename[16];
    printf("Enter name of file to read from: ");
    scanf("%s", filename);
    fflush(stdin);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        fprintf(stderr, "\nError opening file for reading: %s\n", filename);
        return db;
    }

    char row[128];

    do
    {
        fgets(row, sizeof(row), file);
        Show *temp_show = show_from_row(row);
        db = add_to_list(temp_show, db);
    } while (!feof(file));

    return db;
}
```

##### Translating the data
This is probably the most ugly way to do this. It also technically doesn't terminate the string where it needs to terminate, rather generates a work-around only terminating the last character. 
- [ ] Could be solved by while-looping backwards, but this is even more ugly ig
- [ ] _ACTUALLY_: JUST USE `fscanf` INSTEAD YOU STUPID FUCKING IDIOTIC ASS BULLSHIT

```c
Show *show_from_row(char *row)
{
    Show *new = malloc(sizeof(Show));
    int col = 0;
    strncpy(new->date, row + col, sizeof(new->date));
    col += sizeof(new->date);
    strncpy(new->venue, row + col, sizeof(new->venue));
    col += sizeof(new->venue);
    strncpy(new->headliner, row + col, sizeof(new->headliner));
    col += sizeof(new->headliner);
    strncpy(new->support_acts, row + col, sizeof(new->support_acts));

    new->date[sizeof(new->date) - 1] = 0; //putting string teriminators everywhere to actually mark the end of a line
    new->venue[sizeof(new->venue) - 1] = 0; 
    new->headliner[sizeof(new->headliner) - 1] = 0; 
    new->support_acts[sizeof(new->support_acts) - 1] = 0; // IT PHYSICALLY HURTS ME AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

    return new;
}
```

### Sorting the list
![[Quick Sort on Linked List]]


