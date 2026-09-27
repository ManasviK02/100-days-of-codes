/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 35 Question: 1
 * Date : 27-09-2026
 *
 * PROBLEM STATEMENT:
 * Find the second largest element in an array.
 */
#include <stdio.h>

int main()
{
    int n, i, largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Second largest element = %d", second);

    return 0;
}
