#include <stdio.h>
#include <math.h>

int SCHTRINGlength(char *);
void SCHTRINGcpy(char *, char *);
void SCHTRINGrev(char *);
int SCHTRINGcompare(char *, char *);

int main()
{
    char text[] = "Hannes";
    char notHannes[] = "Hannes but longer";
    char hannes[] = "Hannes";
    int length;
    length = SCHTRINGlength(text);

    printf("length of the SCHTRING: %d", length);

    SCHTRINGrev(text);
    printf("\nstring reversed: %s", text);

    printf("\ndo strings match: %d\n", SCHTRINGcompare(hannes, notHannes));

    return 0;
}

int SCHTRINGlength(char *t)
{
    int length = 0;
    int i = 0;
    while (t[i] != 0)
    {
        length++;
        i++;
    }

    return length;
}

void SCHTRINGcpy(char *to, char *from)
{
    int i = 0;
    while (from[i++] != 0)
    {
        to[i] = from[i];
    }

    /*
    // alternate version
    // abuses fact that arrays are represented as the pointer to the first element of the array
    // abuses the fact that every value except 0x0 is interpreted as `true`
    // look at '=' as having return value of the value being assigned
    while(*to++ = *from++);
    */
}

void SCHTRINGrev(char *str)
{
    int j = SCHTRINGlength(str) - 1;
    char temp;
    for (int i = 0; i < j; i++)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
}

int SCHTRINGcompare(char *s1, char *s2)
{
    int i = 0;
    int result = 0;
    while (s1[i++] != 0)
    {
        result = s1[i] - s2[i];
        if (result != 0)
        {
            break;
        }
    }

    return result;
}
