// Write a program to find the number of and sum of all interger greater than 100 and less than 200 that are divisible by 7.
#include<stdio.h>
int main()
 {
    int count=0,sum=0,i;
    printf("All intergers greater than 100 and less than 200 that are divisible by 7 are below: \n");
    for(i=100;i<=200;i++)
     {
        if(i%7==0)
         {
            sum+=i;
            count++;
            printf("%d \t",i);  
         }
     }
    printf("\n");
    printf("There are %d numbers whithin this range and whose sum is %d \n",count,sum);
     return 0; 
 }