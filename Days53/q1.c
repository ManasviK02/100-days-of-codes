/*
 * Name : Manasvi
 * Roll : 590041297
 * Day  : 53  Question: 1
 * Date : 03-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

 */
#include <stdio.h>
int main()
{
int arr[100], n;
int total = 0, leftsum = 0, rightsum;
int pivot = -1;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
total = total + arr[i];
}
for(int i = 0; i < n; i++)
{
rightsum = total - leftsum - arr[i];
if(leftsum == rightsum)
{
pivot = i;
break;
}
leftsum = leftsum + arr[i];
}
printf("Pivot index = %d", pivot);
return 0;
}
