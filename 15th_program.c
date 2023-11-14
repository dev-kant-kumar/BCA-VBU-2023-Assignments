// Write a program that finds whether entered number is Armstrong or not.
#include<stdio.h>
#include<math.h>
int main()
 {
  int num,reminder,count=0,i,temp=num,sum=0,set=num;
  printf("Enter a number : ");
  scanf("%d",&num);
  // Find the numbers of digits of input number and store it in count.
  while(num!=0)
   {
    reminder=num%10;
    count++;
    num/=10;
   }
  // Calculate the sum of the digits raised to the power of the number of digits.
   for(i=0;i<count;i++)
    {
      reminder=temp%10;
      sum+=pow(reminder,count);
      temp/=10;
    }
  // Check if the sum of the digits is equal to the original input number. 
   if(set==sum)
    {
      printf("Entered number is an armstrong number \n");
    } 
   else
    {
      printf("Entered number is not an armstrong number \n");
    } 
   return 0; 
 }