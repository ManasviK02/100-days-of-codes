/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 44 Question: 1
 * Date : 28-10-2026
 *
 * PROBLEM STATEMENT:
 * Count spaces, digits, and special characters in a string.
 */
#include <stdio.h>
int main()
{
char str[100];
int i = 0;
int spaces = 0, digits = 0, special =0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
while(str[i] != '\0')
{
if(str[i] == ' ')
{
spaces++;
}
else if(str[i] >= '0' && str[i] <= '9')
{
digits++;
}
else if(!((str[i] >= 'a' && str[i] <= 'z') ||
(str[i] >= 'A' && str[i] <= 'Z')) &&
str[i] != '\n')
{
special++;
}
i++;
}
printf("Number of spaces = %d\n", spaces);
printf("Number of digits = %d\n", digits);
printf("Number of special characters = %d\n", special);
return 0;
}
