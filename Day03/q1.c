/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 03 Question: 1
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to convert temperature from Celsius to Fahrenheit.
 */
#include<stdio.h>
int main()
{
float c , f ;
printf("enter temperature in c");
scanf("%f", &c);
f = (c * 9/2)+32;
printf("temperatur in fahrenheit =%.2f",f);
return 0;
}
