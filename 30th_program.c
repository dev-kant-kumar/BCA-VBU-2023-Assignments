// Write a program that swap two numbers using third variable and without using third variable.
#include<stdio.h>
void swap1(int a,int b);     // swap two no using third variable
void swap2(int a,int b);     // swap two no without using third variable.
int main()
 {
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    swap1(a,b);
    swap2(a,b);
    return 0;
 }
void swap1(int a,int b)
 {
    int c;
    c=a;
    a=b;
    b=c;
    printf("First no is %d \n",a);
    printf("Second no is %d \n",b);
 } 
void swap2(int a,int b)
 {
    a=a+b;
    b=a-b;
    a=a-b;
    printf("First no is %d \n",a);
    printf("Second no is %d \n",b);
 } 