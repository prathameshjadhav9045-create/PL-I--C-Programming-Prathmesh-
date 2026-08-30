/* Program(8): Write a program to swap two numbers using 
a temporary variable 
   
   Solution(2): User defined values
   */

   # include <stdio.h>
   int main()
   {
    int a,b,temp;

    printf("\n Enter first number :");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("\n after swapping :\n");
    printf("\n First number = %d\n",a);
    printf("\n Second number = %d\n",b);

    return 0;
    
   }