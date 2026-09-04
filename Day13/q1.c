/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 13 Question: 1
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
 */
#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero is not possible.");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d", a % b);
            else
                printf("Modulo by zero is not possible.");
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}
