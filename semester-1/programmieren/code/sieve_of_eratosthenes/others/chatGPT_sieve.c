#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

int countPrimes(int limit)
{
    if (limit < 2)
    {
        return 0;
    }

    // Using bits to represent numbers (1 for prime, 0 for non-prime)
    int numBytes = (limit + 7) / 8; // Number of bytes needed
    char *isPrime = (char *)malloc(numBytes);
    if (isPrime == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Initialize all numbers as prime
    for (int i = 0; i < numBytes; i++)
    {
        isPrime[i] = 0xFF; // Set all bits to 1
    }

    int sqrtLimit = (int)sqrt((double)limit);

    // Mark multiples of each prime number as non-prime
    for (int p = 2; p <= sqrtLimit; p++)
    {
        if ((isPrime[p / 8] & (1 << (p % 8))) != 0)
        {
            for (int i = p * p; i <= limit; i += p)
            {
                isPrime[i / 8] &= ~(1 << (i % 8));
            }
        }
    }

    // Count the number of prime numbers
    int count = 0;
    for (int i = 2; i <= limit; i++)
    {
        if ((isPrime[i / 8] & (1 << (i % 8))) != 0)
        {
            count++;
        }
    }

    // Free allocated memory
    free(isPrime);

    return count;
}

int main()
{
    int limit;
    double t1, t2;
    printf("Enter the limit for prime numbers: ");
    scanf("%d", &limit);

    t1 = (double)clock() / CLOCKS_PER_SEC;
    int primeCount = countPrimes(limit);
    t2 = (double)clock() / CLOCKS_PER_SEC;

    printf("Number of prime numbers up to %d: %d\n", limit, primeCount);
    printf("Time: %.5f seconds\n", t2 - t1);

    return 0;
}
