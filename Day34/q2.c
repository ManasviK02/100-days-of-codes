/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 34 Question: 2
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Delete an element from an array.
 */
#include <stdio.h>

int main() {
    int a[100], n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position");
    }
    else {
        // Shift elements to the left
        for(i = pos - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        n--;

        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
