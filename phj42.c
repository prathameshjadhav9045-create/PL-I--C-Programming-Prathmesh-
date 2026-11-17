/*
Program (42) -> Write a program to count the number of lines in a text file.

Solution: File Handling
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int count = 0;

    // Open the file in read mode
    fp = fopen("student.txt", "r");

    // Check whether the file exists
    if (fp == NULL)
    {
        printf("Unable to open file.");
        return 1;
    }

    // Read each character from the file
    while ((ch = fgetc(fp)) != EOF)
    {
        // Check for newline character
        if (ch == '\n')
        {
            count++;
        }
    }

    // Close the file
    fclose(fp);

    // Display the total number of lines
    printf("Total number of lines = %d", count);

    return 0;
}
