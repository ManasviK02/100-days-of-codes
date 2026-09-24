/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 33 Question : 2
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Insert an element in a sorted array at the appropriate position.
 */
#include <stdio.h>

int main() {
    int a[100], n, element, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Find correct position
    pos = n;

    for(i = 0; i < n; i++) {
        if(element < a[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert element
    a[pos] = element;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
