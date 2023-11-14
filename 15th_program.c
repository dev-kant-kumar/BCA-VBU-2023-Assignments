// Write a program that finds whether entered number is Armstrong or not.
#include<stdio.h>
#include<math.h>
int main()
 {
   int no_of_nos;
   int num,reminder,count=0,sum=0,temp=num,temp1=num,i,j;
   printf("Enter,how many numbers do you want to check :");
   scanf("%d",&no_of_nos);
   for(i=0;i<no_of_nos;i++)
    {
      
      printf("Enter number %d : ",i+1);
      scanf("%d",&num);
      // Find the numbers of digits in input number and store it in count.
      while(num!=0)
       {
         reminder=num%10;
         count++;
         num/=10;

       }
       printf("No of digits =%d \n",count);
      // Calculating the sum of the digits raised to the power of no of digits in the input no.
      for(j=0;j<count;j++)
       {
         reminder=temp%10;
         sum+=(int)pow(reminder,count);
         temp/=10;
       } 
      // Checking if the sum of the digits is equal to the original input number
      printf("Sum is %d  \n",sum);
      if(sum==temp1)
       {
         printf("Entered number is an armstrong number \n");
       } 
      else
       {
         printf("Entered number is not an armstrong number \n");
       } 

    }
   return 0; 
 }