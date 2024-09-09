#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>

uint64_t* init_array(int length);
void bubble_sort(uint64_t *arr, uint64_t length);
void bogo_sort(uint64_t *arr, uint64_t length);
bool sorted(uint64_t *arr, uint64_t length);
void shuffle_array(uint64_t *arr, uint64_t length);
void print_array(uint64_t *arr, uint64_t length);
void time_sorting_algos();

int main()
{
    srand(time(NULL));

    time_sorting_algos();


    return 0;
}



uint64_t* init_array(int length) {
    uint64_t* arr = malloc(length * sizeof(uint64_t));
    for (int i = 0; i < length; i++) {
        arr[i] = rand();
    }
    return arr;
}

void bubble_sort(uint64_t *arr, uint64_t length) {
    for(uint64_t i = 0; i < length - 1; i++) {
        for(uint64_t j = 0; j < length - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                uint64_t temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void bogo_sort(uint64_t *arr, uint64_t length) {
    while(!sorted(arr, length)) {
        shuffle_array(arr, length);
    }
}



bool sorted(uint64_t *arr, uint64_t length) {
    for(uint64_t i = 0; i < length - 1; i++) {
        if(arr[i] > arr[i + 1]) return false;
    }

    return true;
}

bool miracle_sort(uint64_t *arr, uint64_t length) {
    while(!sorted(arr, length)) {}
}

void shuffle_array(uint64_t *arr, uint64_t length) {
    // Seed the random number generator

    for (uint64_t i = 0; i < length; i++) {
        // Generate a random index
        uint64_t j = i + rand() / (RAND_MAX / (length - i) + 1);

        // Swap array[i] and array[j]
        uint64_t temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void print_array(uint64_t *arr, uint64_t length) {
    for (uint64_t i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



void time_sorting_algos() {
    uint64_t sizes[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 20};
    int num_sizes = sizeof(sizes) / sizeof(sizes[0]);

    for (int i = 0; i < num_sizes; i++) {
        uint64_t size = sizes[i];
        uint64_t *arr = init_array(size);
        
        clock_t start, end;
        double cpu_time_used;

        // Bubble Sort
        start = clock();
        bubble_sort(arr, size);
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("Bubble Sort Time for size %lu: %f seconds\n", size, cpu_time_used);

        // Bogo Sort
        shuffle_array(arr, size);
        start = clock();
        bogo_sort(arr, size);
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("Bogo Sort Time for size %lu: %f seconds\n", size, cpu_time_used);

        free(arr);
    }
}


