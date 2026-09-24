/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 32 Question: 1
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Merge two arrays.
 */
#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Copy first array into third array
    for(i = 0; i < n1; i++) {
        c[i] = a[i];
    }

    // Copy second array after first array
    for(i = 0; i < n2; i++) {
        c[n1 + i] = b[i];
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
