/*
Program (40) ->
Write a program to exchange the values of two variables using call by reference.
Solution: Pointer - Call by reference
*/

#include <stdio.h>

// Function to exchange values using pointers
void fun_swap(int *a, int *b)
{
    int temp;    // Declare a temporary variable

    temp = *a;   // Store the value of first variable
    *a = *b;     // Assign second variable's value to first
    *b = temp;   // Assign temporary value to second variable
}

int main()
{
    int num1, num2;    // Declare two integer variables

    // Accept values from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Display values before swapping
    printf("\nBefore Swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // Call function by passing addresses
    fun_swap(&num1, &num2);

    // Display values after swapping
    printf("\nAfter Swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
