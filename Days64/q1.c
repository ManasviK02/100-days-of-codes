/*
 * Name : Manasvi
 * Roll : 590041297
 * Day :  Question: 1
 * Date : 03-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

 */
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int maxLength = 0;

    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = i; j < n; j++)
        {
            int repeated = 0;

            for (int k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeated = 1;
                }
            }

            if (repeated == 1)
            {
                break;
            }

            count++;

            if (count > maxLength)
            {
                maxLength = count;
            }
        }
    }
printf("Length = %d", maxLength);
return 0;
}
