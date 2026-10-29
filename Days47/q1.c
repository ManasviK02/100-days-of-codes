/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 47 Question: 1
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Check if two strings are anagrams of each other.
 */
#include <stdio.h>
int main()
{
char str1[100], str2[100];
int count[26] = {0};
int i, flag = 1;
printf("Enter first string: ");
scanf("%s", str1);
printf("Enter second string: ");
scanf("%s", str2);
for(i = 0; str1[i] != '\0'; i++)
{
count[str1[i] - 'a']++;
}
for(i = 0; str2[i] != '\0'; i++)
{
count[str2[i] - 'a']--;
}
for(i = 0; i < 26; i++)
{
if(count[i] != 0)
{
flag = 0;
break;
}
}
if(flag == 1)
printf("The strings are anagrams.");
else
printf("The strings are not anagrams.");
return 0;
}
