/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 14 Question: 1
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the sum of the first n odd numbers.
 */
#include <stdio.h>

int main()
{
    int n, i = 1, odd = 1, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + odd;
        odd = odd + 2;
        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}
