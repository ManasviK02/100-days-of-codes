/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 13 Question: 2
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print numbers from 1 to n.
 */
#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}
