/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 08 Question: 1
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 *Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit,
 or special character.
 */
#include<stdio.h>
int main()
{
char ch;
int a;
printf("enter a character");
scanf("%c %d", &ch , &a);
if (ch>='A' && ch<='Z')
{
printf("the character is uppercase alphabet");
}
else if (ch>='a' && ch<='z')
{
printf("the character is lowercase alphabet");
}
else if (a>='0' && a<='9')
{
printf("the a is digit ");
}
else
{
printf("the character is a special case");
}
return 0;
}
