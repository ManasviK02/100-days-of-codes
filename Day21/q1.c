/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 21 Question: 1
 * Date : 16-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to swap the first and last digit of a number.
 */
#include <stdio.h>

int main()
{
    int n, temp, first, last, digits = 1, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    result = n - first * power - last;
    result = result + last * power + first;

    printf("Number after swapping = %d", result);

    return 0;
}
