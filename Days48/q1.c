/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 48 Question: 1
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Check if one string is a rotation of another.
 */
#include <stdio.h>
int main()
{
char str1[100], str2[100];
int i, j, k, len1 = 0, len2 = 0;
int flag = 0;
printf("Enter first string: ");
scanf("%s", str1);
printf("Enter second string: ");
scanf("%s", str2);
for(i = 0; str1[i] != '\0'; i++)
len1++;
for(i = 0; str2[i] != '\0'; i++)
len2++;
if(len1 == len2)
{
for(i = 0; i < len1; i++)
{
k = i;
for(j = 0; j < len1; j++)
{
if(str1[k] != str2[j])
break;
k++;
if(k == len1)
k = 0;
}
if(j == len1)
{
flag = 1;
break;
}
}
}
if(flag == 1)
printf("String 2 is a rotation of String 1.");
else
printf("String 2 is not a rotation of String 1.");
return 0;
}
