/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 25 Question: 1
 * Date : 17-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
5
45
345
2345
12345
 */
#include <stdio.h>

int main()
{
    int i = 5, j;

    while (i >= 1)
    {
        j = i;

        while (j <= 5)
        {
            printf("%d", j);
            j++;
        }

        printf("\n");
        i--;
    }

    return 0;
}
