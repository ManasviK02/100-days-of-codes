/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 38 Question: 2
 * Date : 27-09-2026
 *
 * PROBLEM STATEMENT:
 * Check if a matrix is symmetric.
 */
#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;
    int flag = 1;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
            }
        }
    }

    if(flag == 1)
    {
        printf("Matrix is symmetric.");
    }
    else
    {
        printf("Matrix is not symmetric.");
    }

    return 0;
}
