#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>

#define LENGTH (int) 1e9

#define TO_FIND -1

void init(uint32_t *numbers, uint32_t length);
void place_random_number(uint32_t *numbers, uint32_t length);
int32_t linear_search(uint32_t *numbers, uint32_t length);
int32_t binary_search(uint32_t *numbers, uint32_t length, uint64_t low, uint64_t high);
int compare(const void *a, const void *b);
void print_numbers_around_index(uint32_t *numbers, uint32_t length, int index);

void time_search_algorithms();

uint32_t numbers[LENGTH];

int main()
{
    time_search_algorithms();

    return 0;
}


void init(uint32_t *numbers, uint32_t length)
{
    srand(time(NULL)); // seed the random number generator
    for (int i = 0; i < length; i++)
    {
        numbers[i] = rand() % 0xffffffff; // generate a random number in the range [0, 255]
    }
    // place_random_number(numbers, length);
}


void place_random_number(uint32_t *numbers, uint32_t length)
{
    int index = rand() % length; 
    numbers[index] = TO_FIND; 
}




int32_t linear_search(uint32_t *numbers, uint32_t length)
{
    for (int i = 0; i < length; i++)
    {
        if (numbers[i] == TO_FIND)
        {
            return i;
        }
    }
    return -1;
}



// the only piece of code I actually wrote myself lol
int32_t binary_search(uint32_t *numbers, uint32_t length, uint64_t low, uint64_t high)
{
    if (high < low)
    {
        return -1;
    }

    int pivot = low + (high - low) / 2;
    uint32_t at_pivot = numbers[pivot];


    if (at_pivot == TO_FIND)
    {
        return pivot;
    }
    if (TO_FIND < at_pivot)
    {
        return binary_search(numbers, length, low, pivot - 1);
    }
    return binary_search(numbers, length, pivot + 1, high);
}

int compare(const void *a, const void *b)
{
    return (*(uint32_t *)a - *(uint32_t *)b);
}

void print_numbers_around_index(uint32_t *numbers, uint32_t length, int index)
{
    printf("\n\n-------\n");
    int start = index - 5;
    int end = index + 5;
    if (start < 0)
    {
        start = 0;
    }
    if (end >= length)
    {
        end = length - 1;
    }
    for (int i = start; i <= end; i++)
    {
        if(i == index)
        {
            printf("-> ");
        }
        printf("%d\n", numbers[i]);
    }
    printf("\n-------\n\n");
}


void time_search_algorithms()
{
    int lengths[] = {50000, 100000, 150000, 200000, 250000, 300000, 350000, 400000, 450000, 500000, 1000000, 10000000, 100000000, 1000000000};
    int num_lengths = sizeof(lengths) / sizeof(lengths[0]);

    for (int i = 0; i < num_lengths; i++)
    {
        int length = lengths[i];
        uint32_t *numbers = malloc(length * sizeof(uint32_t));
        if (numbers == NULL)
        {
            printf("Memory allocation failed\n");
            return;
        }

        init(numbers, length);

        clock_t start, end;
        double time_linear = 0.0, time_binary = 0.0;

        // Linear Search
        start = clock();
        int32_t linear_result = linear_search(numbers, length);
        end = clock();
        time_linear = ((double)(end - start)) / CLOCKS_PER_SEC;

        // Sort the array
        qsort(numbers, length, sizeof(uint32_t), compare);

        // Binary Search
        start = clock();
        int32_t binary_result = binary_search(numbers, length, 0, length - 1);
        end = clock();
        time_binary = ((double)(end - start)) / CLOCKS_PER_SEC;

        printf("\n\nArray Length: %d\n", length);
        printf("Linear Search Result: %d\n", linear_result);
        printf("Binary Search Result: %d\n", binary_result);
        printf("Linear Search Time: %f seconds\n", time_linear);
        printf("Binary Search Time: %f seconds\n", time_binary);

        free(numbers);
    }
}