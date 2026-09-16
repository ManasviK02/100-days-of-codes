/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 22 Question: 2
 * Date : 17-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
 */
#include <stdio.h>

int main()
{
    int n, i = 2;
    float sum = 1.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + (float)(2 * i - 1) / (2 * i);
        i++;
    }

    printf("Sum = %.2f", sum);

    return 0;
}
