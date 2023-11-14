//Write a program to find reverse of a number.
#include<stdio.h>
int main()
 {
    int num,reminder,reverse=0,contain;
    printf("Enter a number : ");
    scanf("%d",&num);
    contain=num;
    while(num!=0)
     {
        reminder=num%10;
        reverse=reverse*10+reminder;
        num/=10;
     }
    printf("Reverse of %d = %d \n",contain,reverse);
    return 0; 
 }