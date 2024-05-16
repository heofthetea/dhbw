// #include "pointerWDH.h"
#include <time.h>
#define SIZE (uint64_t) 900000000
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

#define LEN_SUPPORT_ACTS 64

typedef struct
{

} Show;

typedef struct Node
{
    struct Node *next;
    struct Node *previous;
} Node;

typedef struct List
{
    int length;
    Node *head;
    Node *current;
    Node *tail;
} List;

//--------------------------------------------------------------------------------------------------------------------------------------------

Node *new_node(Node *previous, Node *next)
{
    Node *new = malloc(sizeof(Node));
    new->previous = previous;
    new->next = next;

    return new;
}

void add_to_list(List *list)
{
    if (list->length == 0)
    {

        list->head = new_node(NULL, list->tail);
        list->tail = list->head;
    }
    else
    {
        list->tail->next = new_node(list->tail, list->tail->next);
        list->tail = list->tail->next;
    }
    list->length++;
}

List *new_list()
{
    List *new = malloc(sizeof(List));
    new->length == 0;
    new->head, new->current, new->tail = 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
    printf("Starting list initialization for %llu elements", SIZE);
    printf("\nsize of one node: %d\n", sizeof(Node));
    double t1 = (double)clock() / CLOCKS_PER_SEC;
    List *db = new_list();
    for (uint64_t i = 0; i < SIZE; i++)
    {
        add_to_list(db);
    }
    double t2 = (double)clock() / CLOCKS_PER_SEC;

    printf("STOP\n");

    printf("%lf \n", t2 - t1);

    return 0;
}
