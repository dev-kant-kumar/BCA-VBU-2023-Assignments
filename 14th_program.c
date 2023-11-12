// Write a program to find whether enterd number is prime or not. 
#include<stdio.h>
int main()
 {
    int no_of_nos,i,j,num,count=0;
    printf("Enter,how many numbers do you want to check:");
    scanf("%d",&no_of_nos);
    for(i=0;i<no_of_nos;i++)
     {
        printf("Enter number %d :",i+1);
        scanf("%d",&num);
        if(num>2)
         {
            for(j=2;j<=num/2;j++)
             {
                if(num%j==0)
                 {
                    count++;
                    break;
                 }    
             }
            if(count==0)
             {
                printf("Entered number is prime no \n");
             } 
            else
             {
                printf("Entered number is not a prime no \n");
             } 
         }
        else
         {
            printf("Entered number is not a prime no \n");
         } 

     }

 }