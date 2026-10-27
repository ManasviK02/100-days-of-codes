/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 45 Question: 1
 * Date : 28-10-2026
 *
 * PROBLEM STATEMENT:
 * Count frequency of a given character in a string.
 */
#include <stdio.h>
int main()
{
char str[100];
char ch;
int i = 0, count = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
printf("Enter the character to search: ");
scanf("%c", &ch);
while(str[i] != '\0')
{
if(str[i] == ch)
{
count++;
}
i++;
}
printf("Frequency of %c = %d", ch, count);
return 0;
}
