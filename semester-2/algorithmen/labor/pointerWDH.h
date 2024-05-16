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

