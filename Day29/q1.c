/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 29 Question: 1
 * Date : 19-09-2026
 *
 * PROBLEM STATEMENT:
 * Find the sum of array elements.
 */
#include <stdio.h>

int main()
{
    int a[5], i, sum = 0;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum of array elements = %d", sum);

    return 0;
}
