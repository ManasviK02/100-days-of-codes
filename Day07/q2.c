/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 07 Question: 2
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 *Write a program to input a character and check whether it is a vowel or consonant using if–else.
 */
#include<stdio.h>
int main()
{
char ch;
printf("enter a character");
scanf("%c", &ch);
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("the ch is vowel");
}
else
{
printf("the ch is consonant");
}
return 0;
}
