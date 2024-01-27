#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void printTriangle(int);

int main()
{

    int max_stars;
    printf("enter maximum number of stars: ");
    scanf("%d", &max_stars);

    printPyramid(max_stars);

    return 42;
}

void printTriangle(int max)
{

    for (int i = 0; i < max; i++)
    {
        printf("\n");
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
    }
    printf("\n");
}

void printPyramid(int max)
{
    for (int i = 0; i <= max; i++)
    {
        printf("\n");
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 2 * (max - i) + 1; k > 0; k--)
        {
            printf("*");
        }
    }

    printf("\n\n");
}

// 2 * a + 1
