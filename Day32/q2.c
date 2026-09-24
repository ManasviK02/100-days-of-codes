/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 32 Question: 2
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Find the digit that occurs the most times in an integer number.
 */
#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int digit, i, max = 0, most;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if(n < 0)
        n = -n;

    if(n == 0) {
        printf("Most occurring digit = 0");
        return 0;
    }

    // Count frequency of each digit
    while(n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    // Find the digit with maximum frequency
    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            most = i;
        }
    }

    printf("Most occurring digit = %d\n", most);
    printf("It occurs %d times.", max);

    return 0;
}
