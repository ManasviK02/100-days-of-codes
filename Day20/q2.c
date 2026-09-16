/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 20 Question: 2
 * Date : 16-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the 1’s complement of a binary number and print it.
 */
#include <stdio.h>

int main()
{
    int n, digit, rev = 0, comp = 0;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        rev = rev * 10 + digit;
        n = n / 10;
    }

    while (rev != 0)
    {
        digit = rev % 10;
        comp = comp * 10 + digit;
        rev = rev / 10;
    }

    printf("1's complement = %d", comp);

    return 0;
}
