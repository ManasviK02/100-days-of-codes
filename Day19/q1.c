/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 19 Question: 1
 * Date : 09-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the LCM of two numbers.
 */
#include <stdio.h>

int main()
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        lcm = a;
    else
        lcm = b;

    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("LCM = %d", lcm);
            break;
        }

        lcm++;
    }

    return 0;
}
