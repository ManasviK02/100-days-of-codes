/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 10 Question: 1
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
 */
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a side");
scanf("%d %d %d", &a,&b,&c);
if (a==b||b==c)
{
printf("it is a equilateral triangle");
}
else if (a==b||b==c||a==c)
{
printf("it is a isosceles triangle");
}
else
{
printf("it is a scalene triangle");
}
return 0;
}
