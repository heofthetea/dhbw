#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    int step = 10;
    int custom_max_int = 0x7fffffff; //MAKE USE OF HEX FUNCTIONALITY!!!
    int val = custom_max_int - step;
    for (int i = 0; i < 2 * step; i++)
    {
        printf("%d\n", val++);
    }
    return 42;
}