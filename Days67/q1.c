/*
 * Name : Manasvi
 * Roll : 590041297
 * Day :  Question: 1
 * Date : 03-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
 */
#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int m, n;
    int i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter elements of first sorted array: ");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter elements of second sorted array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    // Compare elements of both arrays
    while(i < m && j < n)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while(i < m)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while(j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged array: ");

    for(i = 0; i < m + n; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
