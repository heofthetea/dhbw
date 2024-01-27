#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <time.h>

// #define UPPER_LIMIT (uint64_t) 1e8
// #define SEGMENT_SIZE 32768
// #define PRIMES_UNTIL_SQRT 1229

#define UPPER_LIMIT (uint64_t)1e9
#define SEGMENT_SIZE 40000
#define PRIMES_UNTIL_SQRT 32000

// #define UPPER_LIMIT  (uint64_t) 1e10
// #define SEGMENT_SIZE 64000
// #define PRIMES_UNTIL_SQRT 27294

void sieve(bool *, size_t);

//------------------------------------------------------------------------------------------------

typedef struct
{
    uint64_t *data;    // pointer indicates where the memory of the struct instance lies
    uint64_t max_size; // the size of memory allocated
    uint64_t length;   // equivalent to java `array.length` attribute
} list_uint64;

// creates a new list filled with default values
list_uint64 new_list(uint64_t size)
{
    list_uint64 list = {
        malloc(size * sizeof(uint64_t)),
        size,
        0 // haha formatter, now you have to keep the closing brackets in the new line - I WON
    };

    return list;
}

// appends an item to given list. List is passed as reference.
void list_append(list_uint64 *list, uint64_t value)
{
    list->data[list->length++] = value; // stores the value, then increases the lists length attribute by 1
}

uint64_t segmented_sieve(bool *, size_t, list_uint64);

int main()
{

    double t1, t2, t3, t4;
    int num_primes;

    printf("\nCalculation for number of primes until %lu \n\n", UPPER_LIMIT);
    t1 = (double)clock() / CLOCKS_PER_SEC;
    bool is_prime[(size_t)sqrt(UPPER_LIMIT)];
    memset(is_prime + 2, true, sizeof(is_prime) - 2);
    sieve(is_prime, sizeof(is_prime));

    list_uint64 primes = new_list(PRIMES_UNTIL_SQRT);

    t2 = (double)clock() / CLOCKS_PER_SEC;
    num_primes = segmented_sieve(is_prime, sizeof(is_prime), primes);
    t3 = (double)clock() / CLOCKS_PER_SEC;
    t4 = (double)clock() / CLOCKS_PER_SEC;

    double time_initialization = t2 - t1;
    double time_sieving = t3 - t2;
    double time_evaluation = t4 - t3;
    double time_total = time_initialization + time_sieving + time_evaluation;

    printf("\ntime for initialization: \t %.5f", time_initialization);
    printf("\ntime for sieving: \t\t %.5f", time_sieving);
    printf("\ntime for evaluation: \t\t %.5f, as we count during the sieving process itself", time_evaluation);
    printf("\n----------------------------------------");
    printf("\ntime total: \t\t\t %.5f", time_total);

    printf("\n\nnumber of primes: %d\n\n", num_primes);

    return 0;
}

uint64_t segmented_sieve(bool *is_prime, size_t len_is_prime, list_uint64 sieving_primes)
{
    uint64_t low, high;
    uint64_t num_primes = 1;             // 2 is already accounted for everywhere, so we need to manually specify it
    uint64_t sieving_prime_canidate = 3; // only look at primes larger than 2
    uint64_t prime_counter = 3;
    list_uint64 multiples = new_list(sieving_primes.max_size); // need to store exactly one multiple for every prime
    bool segment[SEGMENT_SIZE];
    for (low = 0; low <= UPPER_LIMIT; low += SEGMENT_SIZE)
    {
        memset(segment, true, sizeof(segment));
        high = low + SEGMENT_SIZE - 1; // cutting one off to avoid duplicate processing of a number
        if (high > UPPER_LIMIT)
            high = UPPER_LIMIT;

        for (; sieving_prime_canidate * sieving_prime_canidate <= high; sieving_prime_canidate += 2)
        {
            if (is_prime[sieving_prime_canidate])
            {
                list_append(&sieving_primes, sieving_prime_canidate);                             // it is a prime, so we store it
                list_append(&multiples, (sieving_prime_canidate * sieving_prime_canidate) - low); // create space for corresponding multiples
            }
        }

        // sieves the current segment for primes
        for (int i = 0; i < sieving_primes.length; i++)
        {
            int j = multiples.data[i];
            for (; j < SEGMENT_SIZE; j += sieving_primes.data[i] * 2)
            {
                segment[j] = false;
            }
            multiples.data[i] = j - SEGMENT_SIZE; // stores the multiple that lies outside of the segment, so that next iteration the loop can be started there
        }

        for (; prime_counter <= high; prime_counter += 2)
        {
            if (segment[prime_counter - low])
            {
                num_primes++;
            }
        }
    }

    return num_primes;
}

// regular implementation of a Sieve of Eratosthenes
void sieve(bool *sieving_array, size_t len_sieving_array)
{
    for (int i = 2; i * i < len_sieving_array; i++)
    {
        if (sieving_array[i])
        {
            for (int j = i * i; j < len_sieving_array; j += i)
            {
                sieving_array[j] = false;
            }
        }
    }
}