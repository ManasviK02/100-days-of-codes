/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 17 Question: 1
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is an Armstrong number.
 */
#include <stdio.h>

int main()
{
    int n, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if (original == sum)
    {
        printf("The number is an Armstrong number.");
    }
    else
    {
        printf("The number is not an Armstrong number.");
    }

    return 0;
}
