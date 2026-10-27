/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 39 Question: 1
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Check if the elements on the diagonal of a matrix are distinct.
 */
#include <stdio.h>
int main()
{
int a[10][10];
int n, i, j;
int flag = 0;
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
for(j = i + 1; j < n; j++)
{
if(a[i][i] == a[j][j])
{
flag = 1;
}
}
}
if(flag == 0)
printf("Diagonal elements are distinct.");
else
printf("Diagonal elements are not distinct.");
return 0;
}
