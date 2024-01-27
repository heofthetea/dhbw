#include <string.h>
#include <stdbool.h>
#include <time.h>

// #define UPPER_LIMIT 100000000
#define UPPER_LIMIT (long int) 1e8

void populateArray();
void sieve();
int countPrimes();

bool numbers[UPPER_LIMIT];

int main()
{

    double mw1, mw2, mw3, mw4;
    int primes;

    printf("\nCalculation for number of primes until %ld:\n\n", UPPER_LIMIT);
    // mw1 = nimmzeit();
    mw1 = (double)clock() / CLOCKS_PER_SEC;
    populateArray();
    // mw2 = nimmzeit();
    mw2 = (double)clock() / CLOCKS_PER_SEC;
    sieve();
    // mw3 = nimmzeit();
    mw3 = (double)clock() / CLOCKS_PER_SEC;
    primes = countPrimes();
    // mw4 = nimmzeit();
    mw4 = (double)clock() / CLOCKS_PER_SEC;

    double timeInitialization = mw2 - mw1;
    double timeSieving = mw3 - mw2;
    double timeEvaluation = mw4 - mw3;
    double timeTotal = timeInitialization + timeSieving + timeEvaluation;

    printf("\ntime for initialization: \t %.3f", timeInitialization);
    printf("\ntime for sieving: \t\t %.3f", timeSieving);
    printf("\ntime for evaluation: \t\t %.3f", timeEvaluation);
    printf("\n--------------------------------------------");
    printf("\ntime total: \t\t\t %.3f", timeTotal);

    printf("\n\nnumber of primes: %d\n\n", primes);

    return 0;
}

void populateArray()
{
    memset(numbers + 2, 1, UPPER_LIMIT - 2);
}

void sieve()
{
    for (int i = 3; i * i < UPPER_LIMIT; i += 2)
    {
        if (numbers[i])
        {
            for (int j = i * i; j < UPPER_LIMIT; j += 2 * i)
            {
                numbers[j] = 0;
            }
        }
    }
}

int countPrimes()
{
    int sum = 1;
    for (int i = 3; i < UPPER_LIMIT; i += 2)
    {
        sum += numbers[i];
    }
    return sum;
}

