/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 21 Question: 2
 * Date : 16-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is a perfect number.
 */
#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }

        i++;
    }

    if (sum == n)
        printf("Number is Perfect");
    else
        printf("Number is not Perfect");

    return 0;
}

