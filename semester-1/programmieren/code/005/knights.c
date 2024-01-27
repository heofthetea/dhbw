#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>

#define DIMENSIONS 8

typedef struct
{
    int x;
    int y;
} tuple;

tuple KNIGHT_JUMPS[] = {
    {2, 1},
    {1, 2},
    {2, -1},
    {1, -2},
    {-1, 2},
    {-1, -2},
    {-2, -1},
    {-2, 1},
};

//-------------------------------------------------------------------

typedef struct
{
    tuple *data;       // pointer indicates where the memory of the struct instance lies
    uint64_t max_size; // the size of memory allocated
    uint64_t length;   // equivalent to java `array.length` attribute
} list_tuple;

// creates a new list filled with default values
list_tuple new_list(uint64_t size)
{
    list_tuple list = {
        malloc(size * sizeof(tuple)),
        size,
        0 // haha formatter, now you have to keep the closing brackets in the new line - I WON
    };

    return list;
}

void list_tuple_insert(list_tuple *list, int index, tuple element)
{
    // since we'll only use this to append knight jumps - 8 at maximum - we don't need to handle the case of length > max_size
    for (int i = list->length; i >= index; i--)
    {
        list->data[i] = list->data[i - 1];
    }
    list->data[index] = element;
    list->length++;
}


int BOARD[DIMENSIONS][DIMENSIONS];

//--------------------------------------------------------------------

void print_board()
{
    for (int i = 0; i < DIMENSIONS; i++)
    {
        for (int j = 0; j < DIMENSIONS; j++)
        {
            printf("%02d ", BOARD[i][j]);
        }
        printf("\n");
    }
}

bool is_valid(tuple coordinate)
{
    return (coordinate.x >= 0 && coordinate.x < DIMENSIONS) && (coordinate.y >= 0 && coordinate.y < DIMENSIONS);
}

bool is_full(int board[DIMENSIONS][DIMENSIONS])
{
    for (int i = 0; i < DIMENSIONS; i++)
    {
        for (int j = 0; j < DIMENSIONS; j++)
        {
            if (!board[i][j])
                return false;
        }
    }
    return true;
}

int get_degree(tuple coordinate)
{
    int count = 0;
    int length_knight_jumps = 8;
    for (int i = 0; i < length_knight_jumps; i++)
    {
        tuple temp = {
            coordinate.x + KNIGHT_JUMPS[i].x,
            coordinate.y + KNIGHT_JUMPS[i].y};
        if (is_valid(temp))
        {

            if (!BOARD[temp.x][temp.y])
            {
                count++;
            }
        }
    }

    return count;
}

list_tuple get_possible_jumps(tuple current)
{
    list_tuple jumps = new_list(8);
    int length_knight_jumps = 8;
    for (int i = 0; i < length_knight_jumps; i++)
    {
        tuple jump_to = {
            current.x + KNIGHT_JUMPS[i].x,
            current.y + KNIGHT_JUMPS[i].y};
        if (!is_valid(jump_to))
        {
            continue;
        }
        int degree = get_degree(jump_to);

        int pos = 0;
        for (int j = 0; j < jumps.length; j++)
        {
            if (get_degree(jumps.data[j]) < degree)
            {
                pos++;
            }
        }
        list_tuple_insert(&jumps, pos, jump_to);
    }

    // filters out squares that already have been visited
    list_tuple possible_jumps = new_list(8);
    for (int i = 0; i < jumps.length; i++)
    {
        if (!BOARD[jumps.data[i].x][jumps.data[i].y])
        {
            list_tuple_insert(&possible_jumps, possible_jumps.length, jumps.data[i]);
        }
    }
    free(jumps.data);
    return possible_jumps;
}

bool knight_jump(tuple coordinates, int move)
{
    BOARD[coordinates.x][coordinates.y] = move;
    if (is_full(BOARD))
        return true;

    list_tuple jumps = get_possible_jumps(coordinates);
    for (int i = 0; i < jumps.length; i++)
    {
        if (knight_jump(jumps.data[i], move + 1))
            return true;
    }
    BOARD[coordinates.x][coordinates.y] = 0;
    return false;
}

int main()
{
    char start_x, start_y;
    double time_start, time_end;
    printf("Enter starting coordinate (e.g. a1, g7): ");
    scanf("%c%c", &start_x, &start_y);
    // format coordinates to match array
    tuple start = {
        start_x - 'a',
        start_y - '1'};

    printf("%d, %d\n", start.x, start.y);
    time_start = (double)clock() / CLOCKS_PER_SEC;

    knight_jump(start, 1);

    time_end = (double)clock() / CLOCKS_PER_SEC;

    print_board(BOARD);
    printf("\n");
    printf("time taken: %lf\n", time_end - time_start);
    return 0;
}