/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 06 Question: 2
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
 */
#include<stdio.h>
int main()
{
int a ;
printf("enter a number");
scanf("%d",&a);
if (a>=0)
{
if (a==0)
{
printf("a is zero");
}
}
else if (a<0)
{
printf("a is negative");
}
else 
{
printf("a is positive");
}
return 0;
}
