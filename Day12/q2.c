/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 12 Question: 2
 * Date : 02-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
 */
#include<stdio.h>
int main()
{
int units , rates;
printf("enter units");
scanf("%d %d",&units , &rates);
if (units<=100)
{
printf("5rs./units");
}
else if (units<=200)
{
printf("7rs./units");
}
else if (units<=300)
{
printf("10rs./units");
}
else
printf("12rs./units");
return 0;
}
