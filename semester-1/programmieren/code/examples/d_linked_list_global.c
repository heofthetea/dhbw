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
struct
{
    char name[32 + 1];
    int age;
    // more attributes
} input_student;

// only use global variables for now
students *start = 0;
students *current = 0;
students *temp = 0;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        printf("enter %d name: ", i + 1);
        scanf("%s", &input_student.name);
        fflush(stdin);

        printf("enter %d age: ", i + 1);
        scanf("%d", &input_student.age);
        fflush(stdin);
        // accept more input

        list_add(); // will later be reworked to only use local variables
    }

    printf("\n");
    up_hex();
}
void list_add()
{
    current = (students *)malloc(sizeof(students));
    struct_to_list(); // copies content of input-struct to a list element
}
void struct_to_list()
{
    strcpy(current->name, input_student.name);
    current->age = input_student.age; // idfk if that works lol
    current->before = temp;
    current->after = 0; // last element always points to 0

    if (!temp)
        start = current;
    else
        temp->after = current;

    temp = current;
}

// gib mer mal alles was du hasch aus
void up_hex()
{
    current = start;
    int i;
    while (current)
    {
        printf("\nelemtent %-3d: %20s %10x %10x %10x",
               i,
               current->name,
               current,
               current->before,
               current->after);
        current = current->after;
        i++;
    }
}
