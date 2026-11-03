/*
 * Name : Manasvi
 * Roll : 590041297
 * Day  : 55  Question: 1
 * Date : 03-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

 */
#include <stdio.h>
int main()
{
int nums[100], n;
int count;
int majority = -1;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(int i = 0; i < n; i++)
{
scanf("%d", &nums[i]);
}
for(int i = 0; i < n; i++)
{
count = 0;
for(int j = 0; j < n; j++)
{
if(nums[i] == nums[j])
{
count++;
}
}
if(count > n / 2)
{
majority = nums[i];
break;
}
}
printf("Majority element = %d", majority);
return 0;
}
