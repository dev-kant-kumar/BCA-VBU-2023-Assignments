// Write a program to find fibonacci series using recursion.
#include<stdio.h>
int fiboN(int n);
int main()
 {
    int terms;
    printf("Enter no of terms : ");
    scanf("%d",&terms);
    for(int i=0;i<terms;i++)
     {
        printf("%d \t",fiboN(i));
     }
    return 0;
 }
int fiboN(int n)
 {
    if(n<=1)
     {
        return n;
     }
    else
     {
        return fiboN(n-1)+fiboN(n-2);
     } 

 } 
