/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 09 Question: 2
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 *Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F
 */
#include<stdio.h>
int main()
{
int perc;
printf("enter perc");
scanf("%d", &perc);
if (perc>=90-100)
{
printf("A");
}
else if (perc>=80-89)
{
printf("B");
}
else if (perc>=70-79)
{
printf("C");
}
else if (perc>=60-69)
{
printf("D");
}
else
{
printf("F");
}
return 0;
}
