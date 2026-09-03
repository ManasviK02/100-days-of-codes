/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 04 Question: 1
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to swap two numbers without using a third variable.
 */
#include<stdio.h>
int main()
{
int a,b;
printf("enter two number");
scanf("%d %d", &a,&b);
a = a+b;
b = a-b;
a = a+b;
printf("after swapping;\n");
printf("a = %d\n", a);
printf("b = %d\n", b);
return 0;
}
