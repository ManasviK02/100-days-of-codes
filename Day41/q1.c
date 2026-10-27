/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 41 Question: 1
 * Date : 27-10-2026
 *
 * PROBLEM STATEMENT:
 * Count characters in a string without using built-in length functions.
 */
#include <stdio.h>
int main()
{
char str[100];
int i = 0, count = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
while(str[i] != '\0')
{
if(str[i] != '\n')
{
count++;
}
i++;
}
printf("Number of characters = %d", count);
return 0;
}
