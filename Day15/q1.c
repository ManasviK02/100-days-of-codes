/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 15 Question: 1
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate the factorial of a number.
 */
#include <stdio.h>

int main()
{
    int n, i = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial = %lld", fact);

    return 0;
}
