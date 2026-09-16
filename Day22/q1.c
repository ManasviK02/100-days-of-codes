/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 22 Question: 1
 * Date : 16-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is a strong number.
 */
#include <stdio.h>

int main()
{
    int n, temp, digit, fact, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;

        fact = 1;
        i = 1;

        while (i <= digit)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("Number is Strong");
    else
        printf("Number is not Strong");

    return 0;
}
