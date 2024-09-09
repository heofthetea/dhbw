#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>

int main()
{
    return 0;
}



int dosth(int n) {
    int i, j, res;
    int k = n;
    res = 0;

    for(i = 0; i < n; i ++) {
        for(j = 0; j < k; j ++) {
            res = res + n;
        }
        k = k / 3;
    }
}