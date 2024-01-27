#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>
// sunday is 0 --> start of the week

void string_to_date(char *);
void convert_week_day(struct tm *, char *);
void convert_month_day(struct tm *, char *);

int main()
{
    char date[81];
    string_to_date(date);
    printf("%s", date);

    return 42;
}

void string_to_date(char *date)
{
    struct tm *p_time;

    char htext[80 + 1];
    time_t sec;
    time(&sec); // number of seconds since 01.01.1970
    p_time = localtime(&sec);

    convert_week_day(p_time, date);

    sprintf(htext, "%d. ", p_time->tm_mday);
    strcat(date, htext);

    convert_month_day(p_time, htext);
    strcat(date, htext);

    sprintf(htext, "%d", 1900 + p_time->tm_year);
    strcat(date, htext);
}



void convert_week_day(struct tm *p_time, char *date)
{
    // -> is equivalent to the object '.', but in this case p_time is a pointer!!
    switch (p_time->tm_wday)
    {
    case 0:
        strcpy(date, "Sonntag den ");
        break;
    case 1:
        strcpy(date, "Montag den ");
        break;
    case 2:
        strcpy(date, "Dienstag den ");
        break;
    case 3:
        strcpy(date, "Mittwoch den ");
        break;
    case 4:
        strcpy(date, "Donnerstag den ");
        break;
    case 5:
        strcpy(date, "Freitag den ");
        break;
    case 6:
        strcpy(date, "Samstag den ");
        break;
    default:
        printf("Invalid day of the week\n");
    }
}


void convert_month_day(struct tm *p_time, char *htext)
{
    switch (p_time->tm_mon)
    {
    case 1:
        strcpy(htext, "Januar ");
        break;
    case 2:
        strcpy(htext, "Februar ");
        break;
    case 3:
        strcpy(htext, "März");
        break;
    case 4:
        strcpy(htext, "April ");
        break;
    case 5:
        strcpy(htext, "Mai ");
        break;
    case 6:
        strcpy(htext, "Juni ");
        break;
    case 7:
        strcpy(htext, "Juli ");
        break;
    case 8:
        strcpy(htext, "August ");
        break;
    case 9:
        strcpy(htext, "September ");
        break;
    case 10:
        strcpy(htext, "Oktober ");
        break;
    case 11:
        strcpy(htext, "November ");
        break;
    case 12:
        strcpy(htext, "Dezember ");
        break;
    default:
        printf("Ungültiger Monat\n"); // Invalid month
    }
}
