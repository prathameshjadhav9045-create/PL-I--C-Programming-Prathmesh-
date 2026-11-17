/*
Program (34) ->
Write a program to define a union containing an integer, a float, and a character, and demonstrate how memory is shared among its members.
*/

#include <stdio.h>

union Data
{
    int i;
    float f;
    char ch;
};

int main()
{
    union Data d;    // Declare a union variable

    // Display the total memory allocated to the union
    printf("Size of Union: %lu bytes\n", sizeof(d));

    // Display the memory size of each member
    printf("\nMemory Size of Each Member:\n");
    printf("Integer: %lu bytes\n", sizeof(d.i));    // Display size of integer
    printf("Float: %lu bytes\n", sizeof(d.f));      // Display size of float
    printf("Character: %lu byte\n", sizeof(d.ch));  // Display size of character

    // Display the memory address of each member
    printf("\nMemory Address of Each Member:\n");
    printf("Address of Integer: %p\n", (void *)&d.i);    // Display integer address
    printf("Address of Float: %p\n", (void *)&d.f);      // Display float address
    printf("Address of Character: %p\n", (void *)&d.ch); // Display character address

    // Assign a value to the integer member
    d.i = 100;    // Store 100 in integer member
    printf("\nInteger Value: %d\n", d.i); // Display integer value

    // Assign a value to the float member
    d.f = 25.5;    // Store 25.5 in float member
    printf("Float Value: %.2f\n", d.f);    // Display float value

    // Assign a value to the character member
    d.ch = 'A';    // Store character A in character member
    printf("Character Value: %c\n", d.ch); // Display character value

    return 0;    // Terminate the program
}
