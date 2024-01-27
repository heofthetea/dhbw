#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

typedef struct m_students
{
    struct m_students *before;
    struct m_students *after;
    char name[32 + 1];
    int age;
    // more attributes

} students;

typedef struct
{
    char name[32 + 1];
    int age;

    students *start;
    students *current;
    students *temp;
} input_student;


int main()
{
    input_student input;
    input_student *in = &input;

    in->start = 0;
    in->current = 0;
    in->temp = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("enter %d name: ", i + 1);
        scanf("%s", in->name);
        fflush(stdin);

        printf("enter %d age: ", i + 1);
        scanf("%d", &in->age);
        fflush(stdin);


        list_add(in); // pass input struct
    }

    printf("\n");
    up_hex(in);
}

void list_add(input_student *input)
{
    input->current = (students *)malloc(sizeof(students));
    struct_to_list(input); // copies content of input-struct to a list element
}


void struct_to_list(input_student *input)
{
    strcpy(input->current->name, input->name);
    input->current->age = input->age; // idfk if that works lol
    input->current->before = input->temp;
    input->current->after = 0; // last element always points to 0

    if (!input->temp)
        input->start = input->current;
    else
        input->temp->after = input->current;

    input->temp = input->current;
}

// gib mer mal alles was du hasch aus
void up_hex(input_student *input)
{
    input->current = input->start;
    int i = 0;
    while (input->current)
    {
        printf("\nelemtent %-3d: %20s %10x %10x %10x",
               i,
               input->current->name,
               input->current,
               input->current->before,
               input->current->after);
        input->current = input->current->after;
        i++;
    }
}
