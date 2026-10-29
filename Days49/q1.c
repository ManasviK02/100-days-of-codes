/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 49 Question: 1
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Print the initials of a name.
 */
#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // First character is an initial
    if(name[0] != ' ')
        printf("%c", name[0]);

    // Character after every space is an initial
    for(i = 1; name[i] != '\0'; i++)
    {
        if(name[i - 1] == ' ' && name[i] != ' ')
        {
            printf("%c", name[i]);
        }
    }

    return 0;
}
