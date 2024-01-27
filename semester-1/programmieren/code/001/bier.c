#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.141592

int main()
{
    int max_height = 200;
    int radius = 50;
    for (double height = 0; height < max_height; height += 10)
    {
        double volume = PI * pow(radius, 2) * height;
        printf("Bei einer Höhe von %3.0lf mm beträgt das Volumen %5.3lf Liter!\n", height, volume * 0.0000001);
    }
}