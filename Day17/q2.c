/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 17 Question: 2
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is prime.
 */
#include <stdio.h>

int main()
{
    int n, i = 2, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            count++;
        }

        i++;
    }

    if (n <= 1)
    {
        printf("The number is not prime.");
    }
    else if (count == 0)
    {
        printf("The number is prime.");
    }
    else
    {
        printf("The number is not prime.");
    }

    return 0;
}
