#include <stdio.h>

int main()
{
    int a = 5610;
    int b = 637;
    printf("%d\n\n", ggT(a, b));

    return 42;
}

int ggT(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;

}

