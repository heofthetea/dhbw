#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int parseIntFromChar(char);
short flip(short);

int main()
{
    char modelNumber[32];
    scanf("%s", &modelNumber);

    int sum = 0;
    int multiplier = 1;
    for (int i = 0; i < 7; i++)
    {
        int num = parseIntFromChar(modelNumber[i]);
        if (num < 0)
        {
            continue;
        }

        // bildet quersumme der Zahl
        int rest = (multiplier * num) % 10;
        sum += rest + (multiplier * num - rest) / 10;

        // flips multiplier
        if (multiplier == 1)
        {
            multiplier = 2;
            continue;
        }
        multiplier = 1;
    }

    modelNumber[7] = '-';
    modelNumber[8] = (10 - sum % 10) % 10 + '0'; // calculates check sum
    modelNumber[9] = 0;

    printf("\nErgebnis: %s\n", modelNumber);

    return 42;
}

int parseIntFromChar(char c)
{
    if (c < '0' || c > '9')
    {
        return -0x7fffffff;
    }
    return c - '0';
}
