/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 44 Question: 2
 * Date : 28-10-2026
 *
 * PROBLEM STATEMENT:
 * Replace spaces with hyphens in a string.
 */
#include <stdio.h>
int main()
{
char str[100];
int i = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
while(str[i] != '\0')
{
if(str[i] == ' ')
{
str[i] = '-';
}
i++;
}
printf("String after replacing spaces = %s", str);
return 0;
}
