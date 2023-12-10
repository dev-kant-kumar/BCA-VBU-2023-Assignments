//Write a program that finds the greatest number between two numbers.
#include <stdio.h>
int main()
 {
    int first_number,second_number;
    printf("Enter first no  : ");
    scanf("%d",&first_number);
    printf("Enter second no : ");
    scanf("%d",&second_number);
    if(first_number>second_number)
     {
        printf("%d is greatest \n",first_number);
       
     }
    else if(first_number<second_number)
     {
        printf("%d is greatest \n",second_number);
     }
    else
     {
        printf("Both numbers are same=%d",first_number);
     }
   return 0;
 }
   
     
     
     
       
 
 
