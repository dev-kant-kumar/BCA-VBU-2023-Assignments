//Write a program that finds average of a set of N numbers
#include <stdio.h>
int main()
 {
    int no_of_numbers,i,sum_of_numbers=0,input_number;
    float average;
  
    printf("How many numbers do you want to find the average of : ");
    scanf("%d",&no_of_numbers);
    for(i=1;i<=no_of_numbers;i++)
     {
        printf("Enter no : ");
        scanf("%d",&input_number);
        sum_of_numbers+=input_number;
        
     }
   average=sum_of_numbers/no_of_numbers;
   printf("Average of entered numbers =%f \n",average);
   return 0;
  
 }