/*
Program (39) ->
Write a program to declare a double pointer and display the values stored in the variable, pointer, and double pointer.

Solution: Double Pointer
*/

#include <stdio.h>

int main()
{
    int num = 100;    // Declare and initialize an integer variable

    int *ptr;         // Declare a single pointer

    int **dptr;       // Declare a double pointer

    ptr = &num;       // Store the address of num in ptr

    dptr = &ptr;      // Store the address of ptr in dptr

    // Display using normal variable
    printf("Using Normal Variable:\n");
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);

    // Display using single pointer
    printf("\nUsing Single Pointer:\n");
    printf("Value of num = %d\n", *ptr);
    printf("Address of num = %p\n", (void *)ptr);

    // Display using double pointer
    printf("\nUsing Double Pointer:\n");
    printf("Value of num = %d\n", **dptr);
    printf("Address of num = %p\n", (void *)*dptr);
    printf("Address of ptr = %p\n", (void *)dptr);

    return 0;
}
