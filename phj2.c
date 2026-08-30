/*
 Program(2)- Write a program to make use of basic input output functions
               using different datatypes 
               
  Solution(2) : User defined values             
*/

#include <stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;
    
    printf("\n Enter Student Roll Number:");
    scanf("%d",&rollnum);
    printf("\n Enter Student Percentage:");
    scanf("%f",&per);
    printf("\n Enter Student Grade:");
    scanf(" %c", &grade);

    
    printf(".....student inforamation....\n");
    printf("\nRoll Number is : %d",rollnum);
    printf("\nPercentage is :%f",per);
    printf("\n grade  is    :%c",grade);
    return 0;

}