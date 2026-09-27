/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 35 Question: 2
 * Date : 27-09-2026
 *
 * PROBLEM STATEMENT:
 * Rotate an array to the right by k positions.
 */
#include <stdio.h>

int main()
{
    int n, k, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < k; i++)
    {
        temp = a[n - 1];

        for(j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    printf("Array after right rotation:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
