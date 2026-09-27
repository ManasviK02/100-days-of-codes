/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 36 Question: 1
 * Date : 27-09-2026
 *
 * PROBLEM STATEMENT:
 * Read and print a matrix.
 */
#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;

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

    printf("The matrix is:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}
