/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 08 Question: 2
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input three numbers and find the largest among them using if–else.
 */
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a number");
scanf("%d %d %d", &a,&b,&c);
if (a>b)
{
printf("a is greater");
}
else if (a<c)
{
printf("c is greater");
}
else if (b<c)
{
printf("b is greater");
}
return 0;
}
