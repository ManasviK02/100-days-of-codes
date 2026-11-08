 /*
 * Name : Manasvi
 * Roll : 590041297
 * Day :  Question: 1
 * Date : 03-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
 */
#include <stdio.h>
int main()
{
int n, k, i, j;
scanf("%d", &n);
int arr[n];
for(i = 0; i < n; i++)
scanf("%d", &arr[i]);
scanf("%d", &k);
int maxSum=0, sum;
for(i = 0; i <= n - k; i++)
{
sum = 0;
for(j = i; j < i + k; j++)
sum = sum + arr[j];
if(i == 0 || sum > maxSum)
maxSum = sum;
}
printf("%d", maxSum);
return 0;
}
