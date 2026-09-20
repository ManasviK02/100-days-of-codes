/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 30 Question: 2
 * Date : 20-09-2026
 *
 * PROBLEM STATEMENT:
 * Count positive, negative, and zero elements in an array.
 */
#include <stdio.h>

int main()
{
    int a[10], n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            positive++;
        }
        else if(a[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive elements = %d\n", positive);
    printf("Negative elements = %d\n", negative);
    printf("Zero elements = %d\n", zero);

    return 0;
}
