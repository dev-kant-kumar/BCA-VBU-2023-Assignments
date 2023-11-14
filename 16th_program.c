// Write a program that shows the use of break and continue statement.
#include<stdio.h>
int main()
 {
    int num,sum=0,i;
    printf(" Enter below from these options. \n Enter a postive integer to find their sum \n Enter zero to skip \n Enter negative integer to exit \n\n");
    // I have intentionally not update the value of i, because condition to exit is already set.
    while(i<10)
     {
        printf("Enter a number : ");
        scanf("%d",&num);
        if(num>=1)
         {
            sum+=num;
            
         }
        else if(num==0)
         {
            sum+=num;
            continue;
         }
        else if(num<0)
         {
            printf("You exited \n");
            break;
            
         }  
     }
     printf("Sum of positive numbers you entered =%d \n",sum);
   return 0; 
 }