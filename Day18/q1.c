/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 18 Question: 1
 * Date : 08-09-2026
 *
 * PROBLEM STATEMENT:
 *Write a program to print all factors of a given number.
 */
#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors are: ");

    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}
