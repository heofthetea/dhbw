#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

//---------------------------------------------------------------------------------

typedef enum Classification
{
    OOP,
    FUNCTIONAL,
    PROCEDURAL,
    ESOTERIC,
    BULLSHIT
} Classification;

typedef enum Use_Case
{
    BACKEND,
    FRONTEND,
    FULLSTACK,
    GAMEDEV,
    NONE
} Use_case;


typedef struct
{
    char name[32];
    char date[17]; //change to use data data type lul
    int rating;
    Classification classification;
    Use_case use_case;
} programming_language;


typedef struct Node
{
    programming_language data;
    struct Node *next;
    struct Node *previous;
} Node;

//---------------------------------------------------------------------------------

int main()
{

    return 0;
}

int choose_action() {
    
}