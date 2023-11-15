// Write a program to check whether entered number is palindrome or not.
#include<stdio.h>
int main()
 {
    int num,temp,reminder,reverse=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
     {
        reminder=temp%10;
        reverse=reverse*10+reminder;
        temp/=10;
     }
    printf("Reverse: %d ",reverse); 
    if(reverse==num)
     {
        printf("Entered number is a palindrome no \n");
     }
    else
     {
        printf("Entered number is not a plaindrome no \n");
     
   return 0;  } 
 }