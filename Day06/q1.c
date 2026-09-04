/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 06 Question: 1
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 *Write a program to input an integer and check whether it is even or odd using if–else.
 */
#include<stdio.h>
int main()
{
int a;
printf("enter a number");
scanf("%d", &a);
if (a%2==0)
{
printf("the number is even");
}
else if (a%2!=0)
{
printf("the number is odd");
}
return 0;
}
