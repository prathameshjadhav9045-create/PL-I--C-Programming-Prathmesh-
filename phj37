/*
Program (37) ->
Write a program to accept two strings and perform operations using inbuilt functions:
1) Copy one string into another
2) Reversing the string
3) Length of the string
4) Compare two strings
5) Concatenates one string to another

Solution: Using any built-in string functions
*/

#include <stdio.h>
#include <string.h>    // Header file for string functions

int main()
{
    char str1[100], str2[100], str3[100];

    printf("\n Enter First String: ");
    scanf("%s", str1);
    printf("\n Enter Second String: ");
    scanf("%s", str2);

    // 1) Copy one string into another
    strcpy(str3, str1);
    printf("\n Copied String: %s", str3);

    // 2) Reverse the first string
    printf("\n Reverse of First String: %s", strrev(str1));

    // 3) Find the length of both strings
    printf("\n Length of First String: %d", strlen(str1));
    printf("\n Length of Second String: %d", strlen(str2));

    // 4) Compare two strings
    if (strcmp(str1, str2) == 0)
    {
        printf("\n Both Strings are Equal");
    }
    else
    {
        printf("\n Both Strings are Not Equal");
    }

    // 5) Concatenate second string to first string
    strcat(str1, str2);
    printf("\n Concatenated String: %s", str1);

    return 0;
}
