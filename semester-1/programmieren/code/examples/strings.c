#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    char name[3][7];
    char *pn0 = name[0];


    strcpy(pn0, "Else\n");
    printf("%s", name[0]);

    strcpy(name[1], "Elisabeth\n"); //assignment is too large for defined string length
    printf("%s", name[1]);
    
    strcpy(name[2], "Otto\n");
    printf("%s", name[2]);
    printf("overwritten: %s", name[1]);


    return 42;
}


