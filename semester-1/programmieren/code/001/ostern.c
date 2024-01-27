#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int calcEasterSunday(int);
void printEasterSunday(int, int, int);

int main()
{

    for (int i = 1900; i < 2000; i++)
    {
        int days = calcEasterSunday(i);
        if (days == -1)
        {
            printf("%d ist der Ostersonntag nicht berechenbar!\n", i);
        }
        else
        {
            int month = 3;
            if (days > 31)
            {
                days = days % 31;
                month = 4;
            }

            printEasterSunday(days, month, i);
        }
    }

    return 0;
}

/*
assumes only dates in the 20th century will be passed

returns the date of easter sunday for a given year as "days after the 1st of March"
returns -1 if easter sunday is not calculatable for the passed year
*/
int calcEasterSunday(int year)
{
    if (year == 1954 || year == 1981)
    {
        return -1;
    }

    int a = year % 19;
    int b = year % 4;
    int c = year % 7;

    int d = (19 * a + 24) % 30;
    int e = (2 * b + 4 * c + 6 * d + 5) % 7;

    return 22 + d + e;
}

void printEasterSunday(int day, int month, int year)
{
    if (month == 3)
    {
        printf("%d fällt der Ostersonntag auf den %d. März!\n", year, day);
        return;
    }

    printf("%d fällt der Ostersonntag auf den %d. April!\n", year, day);
}
