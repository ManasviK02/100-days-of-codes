/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 05 Question: 1
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 *Write a program to calculate simple and compound interest for given principal, rate, and time.
 */
#include <stdio.h>

int main()
{
    float p, r, si, ci, amount;
    int t;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%d", &t);

    // Simple Interest
    si = (p * r * t) / 100;

    // Compound Interest for 2 years
    amount = p * (1 + r / 100) * (1 + r / 100);
    ci = amount - p;

    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f", ci);

    return 0;
}
