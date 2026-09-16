/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 25 Question: 2
 * Date : 17-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
 */
#include <stdio.h>

int main()
{
    int i = 5, j;

    while (i >= 1)
    {
        j = 1;

        while (j <= i)
        {
            printf("*");
            j++;
        }

        printf("\n");
        i--;
    }

    return 0;
}
