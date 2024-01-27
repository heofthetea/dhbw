#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>

#define LENGTH 1000

void randomize(int *);
void swap(int *, int, int);
void bubble_sort(int*);
void print_array(int *, int);
bool sorted(int *);

int main()
{
    int numbers[LENGTH];
    randomize(numbers);

    double t1 = (double)clock() / CLOCKS_PER_SEC;
    bubble_sort(numbers);
    print_array(numbers, LENGTH);
    double t2 = (double)clock() / CLOCKS_PER_SEC;
    printf("\nsorted: %d\n", sorted(numbers));
    printf("\ntime taken: %.5lf", t2 - t1);
    printf("\n");
}

void print_array(int *arr, int until)
{
    printf("\n-------------------");
    for (int i = 0; i < until; i++)
    {
        printf("\n%d: %d", i, arr[i]);
    }
    printf("\n-------------------");
}

void randomize(int *numbers)
{
    srand(time(0));
    for (int i = 0; i < LENGTH; i++)
    {
        numbers[i] = rand() % 1000 + 1;
    }
}

void bubble_sort(int *numbers)
{
    while(!sorted(numbers)) {
        for(int i = 0; i < LENGTH - 1; i++) {
            if(numbers[i] > numbers[i + 1]) {
                swap(numbers, i, i + 1);
            }
        }
    }
}

bool sorted(int *arr) {
    for(int i = 0; i < LENGTH - 1; i++) {
        if(arr[i] > arr[i + 1]) return false;
    }

    return true;
}

void swap(int * arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}


