#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

void print_bytes(double);

int main()
{
    double fuck_you;

    printf("Enter a double: ");
    scanf("%lf", &fuck_you);

    print_bytes(fuck_you);

}

void print_bytes(double value)
{
    unsigned char *value_pointer = (unsigned char *)&value;
    // reversing loop condition to account for endian representation

    printf("| ");
    for (int i = sizeof(double) - 1; i >= 0; i--)
    {
        int number = value_pointer[i];
        char bits[8 + 2];
        int fucking_counter_because_the_code_is_ugly_af_already_anyway = 0;

        for (int i = sizeof(bits) - 2; i >= 0; i--)
        {
            if (fucking_counter_because_the_code_is_ugly_af_already_anyway++ == 4)
            {
                bits[i] = 32;
                continue;
            }
            bits[i] = (number % 2) + '0';
            number /= 2;
        }

        printf("%s | ", bits);
    }
    printf("\n");
}