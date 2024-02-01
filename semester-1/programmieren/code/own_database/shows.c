#include "shows.h"

Node *new_node(Show *data, Node *previous, Node *next)
{
    Node *new = malloc(sizeof(Node));
    new->data = data;
    new->previous = previous;
    new->next = next;

    return new;
}

Node *get_last_node(Node *n)
{
    if (n->next == 0)
        return n;
    return get_last_node(n->next);
}

Node *add_to_list(Show *s, Node *list)
{
    if (!list)
    {
        list = new_node(s, 0, 0);
        return list;
    }
    Node *last = get_last_node(list);
    last->next = new_node(s, last, last->next);

    return list;
}

Node *get_element_at(int id, Node *n, int depth)
{
    if (depth == id)
        return n;
    if (!n->next)
        return NULL;
    return get_element_at(id, n->next, depth + 1);
}

Node *delete_from_list(Node *db, Node *n)
{
    if (n->next)
        n->next->previous = n->previous;

    if (n->previous)
        n->previous->next = n->next;
    else
        db = n->next;
    free(n);

    return db;
}


//--------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    int to_do = -0x7fffff;
    Node *db = 0;

    while (to_do)
    {
        render_menu();
        scanf("%d", &to_do);
        system("clear");
        fgetc(stdin); // for some reason this is important, otherwise the  console does madly weird shit

        switch (to_do)
        {
        case -1:
            up_hex(db);
            break;
        case 1:
            db = read_text_file(db);
            break;
        case 2:
            printf("Please enter the prompted attribute of your data set.\n\n");
            db = manual_entry(db);
            break;
        case 3:
            print_datasets(db);
            break;
        case 4:
            write_text_file(db);
            break;
        case 5:
            db = delete_from_input(db);
            break;

        default:
            printf("\nHey Hannes, du Doedel, das ist keine valide Option!\n");
        }
    }

    return 0;
}

void render_menu()
{
    printf("\n1: read .txt file");
    printf("\n2: manually enter dataset");
    printf("\n3: show all datasets");
    printf("\n4: write to .txt file");
    printf("\n5: delete element");

    printf("\n\n-1: up_hex() as debugging tool");
    printf("\n\n> ");
}

Node *manual_entry(Node *db)
{
    Show *s = show_from_console();
    db = add_to_list(s, db);
    return db;
}

// i need to find a different representation, strings are bullshit
Show *show_from_console()
{
    Show *temp = malloc(sizeof(Show));
    printf("enter date of show (as YYYY-MM-DD): ");
    // scanf("%s",&temp->date);
    fgets(temp->date, sizeof(temp->date), stdin);
    temp->date[strcspn(temp->date, "\n")] = 0;

    printf("enter venue of show: ");
    // scanf("%s", &temp->date);
    fgets(temp->venue, sizeof(temp->venue), stdin);
    temp->venue[strcspn(temp->venue, "\n")] = 0;

    printf("enter headliner: ");
    fgets(temp->headliner, sizeof(temp->headliner), stdin);
    temp->headliner[strcspn(temp->headliner, "\n")] = 0;

    printf("enter support acts (seperated by commata): ");
    fgets(temp->support_acts, sizeof(temp->support_acts), stdin);
    temp->support_acts[strcspn(temp->support_acts, "\n")] = 0;

    return temp;
}

void __print_datasets(Node *n, int index)
{
    if (!n)
    {
        printf("\nThere are no entries yet");
        return;
    }

    Show *s = n->data;
    printf("\nnode %3d: %-17s %-20s %-64s %-128s", index, s->date, s->venue, s->headliner, s->support_acts);
    if (n->next == 0)
        return;
    return __print_datasets(n->next, index + 1);
}

void print_datasets(Node *db)
{
    printf("\n          %-17s %-20s %-64s %-128s", "date", "venue", "headliner", "support acts");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------");
    __print_datasets(db, 0);
    printf("\n\n");
}

void __up_hex(Node *list, int index)
{
    if (!list)
    {
        printf("\nList is empty");
        return;
    }
    printf("\nelement %3d: %20s %10x %10x %10x",
           index,
           list->data->headliner,
           list->previous,
           list,
           list->next);
    if (!list->next)
        return;
    return __up_hex(list->next, index + 1);
}

void up_hex(Node *db)
{
    printf("\nelement      %20s %10s %10s %10s", "headliner", "previous", "current", "next");
    printf("\n-------------------------------------------------------");
    __up_hex(db, 0);
    printf("\n-------------------------------------------------------\n");
}

Node *delete_from_input(Node *db)
{
    int temp_id;
    printf("\nEnter element index to delete: ");
    scanf("%d", &temp_id);
    Node *to_delete = get_element_at(temp_id, db, 0);
    if (to_delete)
    {
        db = delete_from_list(db, to_delete);
    }
    return db;
}

//-----------------------------------------------------------------------------------------------------

void write_text_file(Node *db)
{
    // char filename[] = "db.txt";
    char filename[16];
    printf("Enter name of file to write to: ");
    scanf("%s", filename);
    fflush(stdin);

    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        fprintf(stderr, "\nError opening file for writing: %s\n", filename);
        return;
    }

    Node *current = db;
    int index = 0;

    while (current != NULL)
    {
        Show *s = current->data;
        // lul this really does the exact same as printing to console xd
        fprintf(file, "%-17s%-20s%-64s%-128s\n",
                s->date, s->venue, s->headliner, s->support_acts); // no spaces here
        current = current->next;
        index++;
    }

    fclose(file);
    printf("\nSuccessfully wrote %i lines to file %s!\n\n", index, filename);
}

Show *show_from_row(char *row)
{
    Show *new = malloc(sizeof(Show));
    int col = 0;
    strncpy(new->date, row + col, sizeof(new->date));
    col += sizeof(new->date);
    strncpy(new->venue, row + col, sizeof(new->venue));
    col += sizeof(new->venue);
    strncpy(new->headliner, row + col, sizeof(new->headliner));
    col += sizeof(new->headliner);
    strncpy(new->support_acts, row + col, sizeof(new->support_acts));

    new->date[sizeof(new->date) - 1] = 0; // putting string teriminators everywhere to actually mark the end of a line
    new->venue[sizeof(new->venue) - 1] = 0;
    new->headliner[sizeof(new->headliner) - 1] = 0;
    new->support_acts[sizeof(new->support_acts) - 1] = 0; // IT PHYSICALLY HURTS ME AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

    return new;
}

// returns the updated linked list
Node *read_text_file(Node *db)
{
    char filename[16];
    printf("Enter name of file to read from: ");
    scanf("%s", filename);
    fflush(stdin);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        fprintf(stderr, "\nError opening file for reading: %s\n", filename);
        return db;
    }

    char row[256];

    do
    {
        fgets(row, sizeof(row), file);
        Show *temp_show = show_from_row(row);
        db = add_to_list(temp_show, db);
    } while (!feof(file));

    return db;
}
