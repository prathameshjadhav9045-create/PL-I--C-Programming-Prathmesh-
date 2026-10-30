/*
Program (25) -> Write a program to find the factorial of a given number using a user-defined function.
Solution (1): Using for loop
*/

#include <stdio.h>[span_0](start_span)[span_0](end_span)

int factorial(int n)[span_1](start_span)[span_1](end_span)
{[span_2](start_span)[span_2](end_span)
    int fact = 1, i;[span_3](start_span)[span_3](end_span)
    for(i = 1; i <= n; i++)[span_4](start_span)[span_4](end_span)
    {[span_5](start_span)[span_5](end_span)
        fact = fact * i;[span_6](start_span)[span_6](end_span)
    }[span_7](start_span)[span_7](end_span)
    return fact;[span_8](start_span)[span_8](end_span)
}[span_9](start_span)[span_9](end_span)

int main()[span_10](start_span)[span_10](end_span)
{[span_11](start_span)[span_11](end_span)
    int n, result;[span_12](start_span)[span_12](end_span)
    printf("Enter a number: ");[span_13](start_span)[span_13](end_span)
    scanf("%d", &n);[span_14](start_span)[span_14](end_span)
    result = factorial(n);[span_15](start_span)[span_15](end_span)
    printf("Factorial of %d = %d", n, result);[span_16](start_span)[span_16](end_span)
    return 0;[span_17](start_span)[span_17](end_span)
}[span_18](start_span)[span_18](end_span)

