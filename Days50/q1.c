/*
 * Name : Manasvi
 * Roll : 590041297
 * Day  : 50 Question: 1
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Change the date format from dd/04/yyyy to dd-Apr-yyyy.
 */
#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if(month == 4)
    {
        printf("New date format: %02d-Apr-%d", day, year);
    }
    else
    {
        printf("Invalid month. Please enter month 04.");
    }

    return 0;
}
