/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 37 Question: 2
 * Date : 27-09-2026
 *
 * PROBLEM STATEMENT:
 * Find the sum of all elements in a matrix.
 */
#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate sum
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}
