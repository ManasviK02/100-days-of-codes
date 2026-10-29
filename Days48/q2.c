/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 48 Question: 2
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Reverse each word in a sentence without changing the word order.
 */
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, start, end;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        // Skip spaces
        if(str[i] == ' ' || str[i] == '\n')
        {
            i++;
            continue;
        }

        // Starting position of word
        start = i;

        // Find end of word
        while(str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            i++;
        }

        end = i - 1;

        // Reverse the word
        while(start < end)
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }
    }

    printf("After reversing each word: %s", str);

    return 0;
}
