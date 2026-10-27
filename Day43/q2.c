/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 43 Question: 2
 * Date : 28-10-2026
 *
 * PROBLEM STATEMENT:
 * Check if a string is a palindrome.
 */
#include <stdio.h>
int main()
{
char str[100];
int i, length = 0;
int flag = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
while(str[length] != '\0')
{
length++;
}
if(str[length - 1] == '\n')
{
length--;
}
for(i = 0; i < length / 2; i++)
{
if(str[i] != str[length - 1 - i])
{
flag = 1;
}
}
if(flag == 0)
printf("String is a palindrome.");
else
printf("String is not a palindrome.");
return 0;
}
