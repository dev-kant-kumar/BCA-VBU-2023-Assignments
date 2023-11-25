//Write a program to find factorial using recursion.
#include<stdio.h>
int fact(int num);
int main()
 {
    int num;
    printf("Enter a number to find their factorial : ");
    scanf("%d",&num);
    printf("Factorial of %d :%d \n",num,fact(num));
 }
int fact(int num)
 {
    if(num==1)
     {
        return 1;
     }
    int factm1=fact(num-1);
    int factN=factm1*num;
    return factN;
 } 