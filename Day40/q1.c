/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 01 Question: 1
 * Date : 27-10-2026
 *
 * PROBLEM STATEMENT:
 * Perform diagonal traversal of a matrix.
 */
#include <stdio.h>
int main()
{
int a[10][10];
int r, c, i, j, k;
printf("Enter number of rows and columns: ");
scanf("%d %d", &r, &c);
printf("Enter matrix elements:\n");
for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
scanf("%d", &a[i][j]);
}
}
printf("Diagonal Traversal:\n");
for(k = 0; k < r + c - 1; k++)
{
for(i = 0; i < r; i++)
{
j = k - i;
if(j >= 0 && j < c)
{
printf("%d ", a[i][j]);
}
}
}
return 0;
}
