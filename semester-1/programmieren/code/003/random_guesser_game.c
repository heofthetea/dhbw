#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char PLAYER_1[64];
char PLAYER_2[64];
int SOLUTION;

char *playGame();
char *swap(char *);

int main()
{
    srand(time(NULL));
    SOLUTION = rand() % 1000 + 1;
    printf("%d", SOLUTION);

    printf("\nenter player 1 name: ");
    scanf("%s", PLAYER_1);
    printf("\nenter player 2 name: ");
    scanf("%s", PLAYER_2);

    char *winner = playGame();

    printf("%s wins!\n", winner);
    printf("\n%s buys coffee\n", swap(winner));

    return 42;
}

// returns the winner
char *playGame()
{
    char *current = PLAYER_1;
    int low = 0;
    int high = 1000;

    int guess = -1;

    while (guess != SOLUTION)
    {
        fflush(stdin);
        printf("%s, enter value between %d and %d: ", current, low, high);
        scanf("%d", &guess);

        while (guess < low || guess > high)
        {
            fflush(stdin);
            printf("%s enter a value between %d and %d YOU FUCKING BOZO ", current, low, high);
            scanf("%d", &guess);
        }
        if (guess == SOLUTION)
        {
            break;
        }
        if (guess < SOLUTION)
        {
            low = guess;
        }
        else
        {
            high = guess;
        }

        current = swap(current);
    }

    return current;
}

// swaps between the players
char *swap(char *current)
{
    if (current == PLAYER_1)
    {
        return PLAYER_2;
    }
    return PLAYER_1;
}
