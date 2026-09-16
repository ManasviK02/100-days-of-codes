/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 16 Question: 1
 * Date : 06-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take a number as input and print its equivalent binary representation.
 */
#include <stdio.h>

int main()
{
    int n, remainder, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary representation = %d", binary);

    return 0;
}
