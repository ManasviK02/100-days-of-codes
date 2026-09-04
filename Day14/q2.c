/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 14 Question: 2
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the product of even numbers from 1 to n.
 */
#include <stdio.h>

int main()
{
    int n, i = 2, product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        product = product * i;
        i = i + 2;
    }

    printf("Product = %d", product);

    return 0;
}
