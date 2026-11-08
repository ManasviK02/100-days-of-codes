/*
 * Name : Manasvi
 * Roll : 590041297
 * Day :  Question: 1
 * Date : 03-11-2026
 *
 * PROBLEM STATEMENT:
 *
 *Write a program to take an array arr[] of integers as input, thetask is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/
#include <stdio.h>
int main()
{
int n, i, j;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
printf("Enter array elements: ");
for(i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
for(i = 0; i < n; i++)
{
int previous = -1;
for(j = i - 1; j >= 0; j--)
{
if(arr[j] > arr[i])
{
previous = arr[j];
break;
}
}
printf("%d", previous);
if(i < n - 1)
{
printf(",");
}
}
return 0;
}
