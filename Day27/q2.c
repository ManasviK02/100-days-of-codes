/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 27 Question: 2
 * Date : 17-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
 */
#include <stdio.h>

int main()
{
    int i = 1, j, space;

    while (i <= 4)
    {
        space = 1;

        while (space <= 4 - i)
        {
            printf(" ");
            space++;
        }

        j = 1;

        while (j <= 2 * i - 1)
        {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    i = 3;

    while (i >= 1)
    {
        space = 1;

        while (space <= 4 - i)
        {
            printf(" ");
            space++;
        }

        j = 1;

        while (j <= 2 * i - 1)
        {
            printf("*");
            j++;
        }

        printf("\n");
        i--;
    }

    return 0;
}

