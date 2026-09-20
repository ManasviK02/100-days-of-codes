/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 30 Question: 1
 * Date : 20-09-2026
 *
 * PROBLEM STATEMENT:
 * Count even and odd numbers in an array.
 */
#include <stdio.h>

int main()
{
    int a[10], n, i;
    int even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);

    return 0;
}
