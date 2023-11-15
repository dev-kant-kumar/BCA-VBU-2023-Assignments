// Write a program that finds whether entered number is Armstrong or not.
#include<stdio.h>
#include<math.h>
int main()
 {
  int num,digits,temp,reminder,sum=0;
  printf("Enter a number : ");
  scanf("%d",&num);
  digits=printf("%d",num);
  temp=num;
  while(temp!=0)
   {
    reminder=temp%10;
    sum+=pow(reminder,digits);
    temp/=10;
   }
   if(sum==num)
    {
      printf(" is an armstrong number \n");
    }
   else
    {
      printf(" is not an armstrong number \n");
    } 
 }