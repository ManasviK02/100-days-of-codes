/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 24 Question: 1
 * Date : 17-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
*
**
***
****
*****
 */
#include <stdio.h>

int main()
{
    int i = 1, j;

    while (i <= 5)
    {
        j = 1;

        while (j <= i)
        {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
