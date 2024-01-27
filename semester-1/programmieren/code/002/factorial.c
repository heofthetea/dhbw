#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int factorial(int);

int main()
{
    int depth;
    printf("enter number up to which factorials will be calculated: ");
    scanf("%d", &depth);
    for(int i = 0; i <= depth; i++) {
        printf("%d factorial = %d\n", i, factorial(i));
    }
    return 42;
}

 int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    return factorial(n - 1) * n;
}