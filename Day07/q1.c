/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 07 Question: 1
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 *Write a program to input a year and check whether it is a leap year or not using conditional statements.
Show Sample Test Cases
Year is a leap year if divisible by 4 but not 100, except if divisible by 400.
 */
#include<stdio.h>
int main()
{
int year;
printf("enter a year");
scanf("%d",&year);
if ((year%400 ==0) || (year%100!=0 && year%4==0))
{
printf("\nyear is leap");
}
else
{
printf("\nyear is not leap");
}
return 0;
}
