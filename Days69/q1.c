/*
 * Name : Manasvi
 * Roll : 590041297
 * Day :  Question: 1
 * Date : 03-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

 */
#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int sum = 0;
    int expectedSum, repeated;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    // Sum of numbers from 1 to n-1
    expectedSum = (n - 1) * n / 2;

    repeated = sum - expectedSum;

    printf("%d", repeated);

    return 0;
}
