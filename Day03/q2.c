/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 03 Question: 2
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to swap two numbers using a third variable.
 */
#include<stdio.h>
int main()
{
int a , b , var;
printf("enter two number");
scanf("%d %d", &a,&b);
printf("\n before swapping a =%d , b = %d\n", a,b);
var=a;
a =b ;
b = var ;
printf("after swapping: a =%d , b =%d\n",a,b);
return 0;
}
