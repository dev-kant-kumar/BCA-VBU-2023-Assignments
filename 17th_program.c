// Write a program to find the factorial of a number.
#include<stdio.h>
int main()
 {
    int num,set;
    long fact;
    printf("Enter a number : ");
    scanf("%d",&num);
    fact=num,set=num;
    if(num<0)
     {
        printf("Factorial are only defined for non-negative no \n");
     }
    else if(num==0) 
     {
        printf("Factorail of 0 = 1");
     }
    else
    {
        while(num!=1)
         {
            fact*=(num-1);
            num--;
         }
       printf("Factorial of %d = %d \n",set,fact);   
    } 
   return 0; 
 }