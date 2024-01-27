#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    // system("chcp 1225"); --> change codepage

    int a = 7, b;
    b = ~a;

    printf("a = %d, b = %d", a, b);
    printf("\n a = %d\naddress of a = %p\naddress of a as hex= %X", a, &a, &a);


    char *za; // creates a pointer
    za = &a; // initializes pointer for a
    printf("\na = %d, \n get a via adress: a = %d\naddress of a: %X", a, *za, za);

    printf("\nGröße char %d int %d", sizeof(char), sizeof(int)); //sizeof ALWAYS returns total number of bytes 


    //---------------------------------------------------------------------------------------------------------
    int erg;
    char c = 'A';
    float f1 = 7.85;
    double d1 = 12.99;
    char text[] = "MaxMustermann";

    // implicit type casting
    erg = a + c; // erg == 72

    //explicit type casting - basically the "-f" of castingx
    erg = erg + (int) f1; // float stronger than int (more memory)
    return 42;
}