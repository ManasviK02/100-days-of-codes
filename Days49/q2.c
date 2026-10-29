/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 49 Question: 2
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Print initials of a name with the surname displayed in full.
 */
#include <stdio.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ' && name[i + 1] != ' ')
        {
            last = i + 1;
        }
    }
    printf("%c. ", name[0]);

    for(i = 1; i < last - 1; i++)
    {
        if(name[i - 1] == ' ' && name[i] != ' ')
        {
            printf("%c. ", name[i]);
        }
    }
    for(i = last; name[i] != '\0' && name[i] != '\n'; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}
