/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 47 Question: 2
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Find the longest word in a sentence.
 */
#include <stdio.h>
int main()
{
char str[100], longest[100];
int i = 0, j = 0;
int length = 0, max = 0, start = 0;
printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);
while(str[i] != '\0')
{
if(str[i] != ' ' && str[i] != '\n')
{
length++;
}
else
{
if(length > max)
{
max = length;
start = i - length;
}
length = 0;
}
i++;
}
if(length > max)
{
max = length;
start = i - length;
}
for(j = 0; j < max; j++)
{
longest[j] = str[start + j];
}
longest[j] = '\0';
printf("Longest word = %s", longest);
printf("\nLength = %d", max);
return 0;
}
