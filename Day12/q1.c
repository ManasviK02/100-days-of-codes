/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 12 Question: 1
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
 */
#include<stdio.h>
int main()
{
int fine , days;
printf("enter fine");
scanf("%d %d", &fine,&days);
if (days<=5)
{
printf("2rs./day");
}
else if (days<=10)
{
printf("4rs./day");
}
else if (days<=20)
{
printf("6rs./day");
}
else if (days<=30)
{
printf("membership canceled");
}
return 0;
}
