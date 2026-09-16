/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 24 Question: 2
 * Date : 17-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
1
12
123
1234
12345
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
            printf("%d", j);
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
