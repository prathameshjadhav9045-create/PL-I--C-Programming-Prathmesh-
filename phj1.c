/*
 Program(1)- Write a program to make use of basic input output functions
               using different datatypes 
               
  Solution(1) : Predefined values             
*/

#include <stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    rollnum=55;
    per=88.88;
    grade='A';

    printf(".....student inforamation....\n");
    printf("\nRoll Number  : %d",rollnum);
    printf("\nPercentagge :%f",per);
    printf("\n grade       :%c",grade);
    return 0;
}