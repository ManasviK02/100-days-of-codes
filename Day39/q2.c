/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 39 Question: 2
 * Date : 27-10-2026
 *
 * PROBLEM STATEMENT:
 * Find the sum of main diagonal elements for a square matrix.
 */
#include <stdio.h>
int main()
{
int a[10][10];
int n, i, j;
int sum = 0;
printf("Enter the size of matrix: ");
scanf("%d", &n);
printf("Enter matrix elements:\n");
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
scanf("%d", &a[i][j]);
}
}
for(i = 0; i < n; i++)
{
sum = sum + a[i][i];
}
printf("Sum of main diagonal elements = %d", sum);
return 0;
}
