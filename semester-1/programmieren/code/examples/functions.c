#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int doSomething(int, float, double *, char, char *, char *);

int main()
{
    int a = 4, erg;
    char c = 'A';
    float f1 = 7.85;
    double d1 = 12.9;
    char text[] = "Hannes";

    erg = doSomething(
        a, // call by value
        f1,
        &d1, // call by reference
        c,
        &c,
        text);
}

int doSomething(int a, float ff, double *wieauchimmer, char bu, char *zbu, char *t)
{

    int erg;

    erg = a + (int)ff          // needs explicit cast -> value: 7
          + (int)*wieauchimmer // needs explicit cast AND pointer operator -> value: 12
          + bu                 // has value 65
          + *zbu               // again has value 65, just accessed differently
          + t[1]               // accesses 'a' = 65 + 32 = 97
        ;

    return erg;

    return 0;
}
