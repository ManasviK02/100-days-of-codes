/*
 * Name : Manasvi
 * Roll : 590041297
 * Day :  Question: 1
 * Date : 03-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take a string input. Change it to sentence case.
 */
#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int newSentence = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        
        if(newSentence == 1 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
            newSentence = 0;
}
        if(str[i] == '.' || str[i] == '?' || str[i] == '!')
        {
            newSentence = 1;
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}
