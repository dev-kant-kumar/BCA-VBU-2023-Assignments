//Write a program that prints the even and odd numbers from 1 to 100.
#include <stdio.h>
int main()
 {
    int i;
    printf("Even numbers are : \n");
    for(i=1;i<=100;i++)
     {
        if(i%2==0)
         {
            printf("\t %d",i);
         }
     }   
    printf("\n\n");
  
   printf("Odd numbers are : \n");
    for(i=1;i<=100;i++)
     {
        if(i%2!=0)
         {
            printf("\t %d",i);
         }
     }
   return 0;
 }


    
        
         
        
     
  
