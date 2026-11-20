/*
 * Name : Manasvi
 * Roll : 590041297
 * Day :  Question: 1
 * Date : 03-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
 */
#include <stdio.h>
int main()
{
int arr[100];
int n, i;
int sum = 0, total, missing;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
sum = sum + arr[i];
}
total = n * (n + 1) / 2;
missing = total - sum;
printf("%d", missing);
return 0;
}
