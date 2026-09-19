/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 01 Question: 1
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 *Read and print elements of a one-dimensional array.
 */
#include<stdio.h>
int main()
{
int i,n,arr[n];
printf("enter elements\n:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<=n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
