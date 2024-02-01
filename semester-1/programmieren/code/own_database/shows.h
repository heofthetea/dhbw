#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

typedef struct
{
    char date[17];
    char venue[20];
    char headliner[64];
    char support_acts[128];

} Show;

typedef struct Node
{
    Show *data;
    struct Node *next;
    struct Node *previous;
} Node;

Show *show_from_console();
Show *show_from_row(char *row);
Node *manual_entry(Node *db);
Node *read_text_file(Node *db);
Node *delete_from_input(Node *db);
void write_text_file(Node *db);
void up_hex(Node *db);
void print_datasets(Node *db);
void render_menu();