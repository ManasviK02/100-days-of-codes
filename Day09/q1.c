/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 09 Question: 1
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the roots of a quadratic equation and categorize them.
 */
#include <stdio.h>

int main()
{
    float a, b, c, D, root;

    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("It is not a quadratic equation.");
    }
    else
    {
        D = (b * b) - (4 * a * c);

        if (D > 0)
        {
            printf("Roots are real and distinct.");
        }
        else if (D == 0)
        {
            root = -b / (2 * a);

            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2f", root);
        }
        else
        {
            printf("Roots are imaginary or complex.");
        }
    }

    return 0;
}
