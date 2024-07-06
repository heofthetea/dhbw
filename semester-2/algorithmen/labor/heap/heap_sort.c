#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>
#define SIZE 10000

void randomize();
bool is_valid_heap(int *arr, uint64_t length);
void heapify(int *arr, uint64_t length);
int heap_pop(int *arr, uint64_t length);
void bubble_up(int *arr, uint64_t node);
void bubble_down(int *arr, uint64_t length, uint64_t node);
uint64_t *getChildren(int *arr, uint64_t length, uint64_t parent);
uint64_t *getParent(int *arr, uint64_t child);
void swap(int *arr, uint64_t a, uint64_t b);
bool sorted(int *arr, uint64_t length);
void heap_sort(int *arr, uint64_t length);

int arr[SIZE];

int main()
{

    // heapify the array
    randomize(arr, SIZE);
    // heapify(arr, SIZE);
    // if (is_valid_heap(arr, SIZE))
    // {
    //     printf("Heap is valid\n");
    // }
    // else
    // {
    //     printf("Heap is not valid, I'm trash\n");
    // }

    heap_sort(arr, SIZE);
    printf("is sorted? %d", sorted(arr, SIZE));

    return 0;
}

void heap_sort(int *arr, uint64_t length)
{
    heapify(arr, length);

    // Loop backwards through the array, swapping the last element with the first (equivalent of `pop`)
    for (int i = length - 1; i >= 0; i--)
    {
        swap(arr, 0, i);
        bubble_down(arr, i, 0); // restore heap functionality through bubble down algorithm
    }
}

void heapify(int *arr, uint64_t length)
{
    for (uint64_t i = 0; i < length; i++)
    {
        bubble_up(arr, i);
    }
}

void bubble_up(int *arr, uint64_t node)
{
    int parent = getParent(arr, node);
    if (parent == -1)
        return;

    if (arr[parent] < arr[node])
    {
        swap(arr, parent, node);
        bubble_up(arr, parent);
    }
}


/*
Recursively performs a bubble down through an entire array.
*/
void bubble_down(int *arr, uint64_t length, uint64_t node)
{
    uint64_t *children = getChildren(arr, length, node);
    if (children[0] >= length)
        return; // node is a leaf

    uint64_t greater_child = node;

    // find index of greater child
    if (children[1] >= length)
    {
        greater_child = children[0]; // node has only one child element
    }
    else
    {
        greater_child = (arr[children[0]] > arr[children[1]]) ? children[0] : children[1];
    }

    // figure out whether swap is necessary or not
    if (arr[node] < arr[greater_child])
    {
        swap(arr, node, greater_child);
        bubble_down(arr, length, greater_child); //value of index `node` is now at index `greater_child`
    }
}

/*
Get indices of the children for a given node as an array.
Returns -1 if a child does not exist.
I'm clearly not pragmatic enough - why exactly is this an extra function???????????
*/
uint64_t *getChildren(int *arr, uint64_t length, uint64_t parent)
{
    uint64_t *children = malloc(2 * sizeof(uint64_t));
    children[0] = 2 * parent + 1;
    children[1] = children[0] + 1;

    return children;
}

uint64_t *getParent(int *arr, uint64_t child)
{
    if (child == 0)
        return -1;
    return (uint64_t)floor((child - 1) / 2);
}

//----------------------------------------------------------
// UTILITY FUNCTIONS

bool sorted(int *arr, uint64_t length)
{
    for (int i = 0; i < length - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

void randomize()
{
    for (uint64_t i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 1000;
    }
    return arr;
}

bool is_valid_heap(int *arr, uint64_t length)
{
    for (uint64_t i = 0; i < length; i++)
    {
        uint64_t *children = getChildren(arr, length, i);
        if (children[0] >= length)
            return true;

        if (arr[i] < arr[children[0]] || arr[i] < arr[children[1]])
            return false;
    }
    return true;
}

void swap(int *arr, uint64_t a, uint64_t b)
{
    uint64_t temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}