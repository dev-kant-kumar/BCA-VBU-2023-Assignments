// Write a program that swaps two numbers using call by value and call by address.
#include<stdio.h>
void swap1(int a,int b);         // call by value.
void swap2 (int *a,int *b);     //call by address.
int main()
 {
    int a,b;
    printf("Enter first no : ");
    scanf("%d",&a);
    printf("Enter second no : ");
    scanf("%d",&b);
    swap1(a,b);
    swap2(&a,&b);
    printf("First no is %d \n",a);
    printf("Second no is %d \n",b);
 }
void swap1(int a,int b)
 {
    a=a+b;
    b=a-b;
    a=a-b;
    printf("First no is %d \n",a);
    printf("Second no is %d \n",b);
 } 
void swap2(int *a,int *b)
 {
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
 } 