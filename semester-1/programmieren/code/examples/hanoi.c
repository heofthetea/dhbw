#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

uint64_t move(int, int, int);
uint64_t hanoi(int, int, int, uint64_t);

int main()
{
    int from = 1;
    int to = 3;

    int discs;
    printf("number of discs: ");
    scanf("%d", &discs);

    uint64_t move_counter = hanoi(from, to, discs, 0);
    printf("\nnumber of moves: %d\n", move_counter);

    return 0;
}

uint64_t hanoi(int from, int to, int disc, uint64_t count)
{
    int temp_pos = 6 - (from + to);

    if (disc == 1)
        return move(disc, from, to);

    return (hanoi(from, temp_pos, disc - 1, count) +
           move(disc, from, to) +
           hanoi(temp_pos, to, disc - 1, count));
}

uint64_t move(int disc, int from, int to)
{
    printf("Move disk of size %d from %d to %d\n", disc, from, to);
    return 1;
}