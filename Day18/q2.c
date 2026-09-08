/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 18 Question: 2
 * Date : 08-09-2026
 * PROBLEM STATEMENT:
 * Write a program to find the HCF (GCD) of two numbers.
 */
#include <stdio.h>

int main()
{
    int a, b, i = 1, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (i <= a && i <= b)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }

        i++;
    }

    printf("HCF = %d", hcf);

    return 0;
}
