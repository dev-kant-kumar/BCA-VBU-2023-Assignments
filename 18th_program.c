// Write a program to find first n fibonacci number.
#include<stdio.h>
int main()
 {
    int nterms,i;
    printf("Enter the no of terms of series : ");
    scanf("%d",&nterms);
    int fibo_series[nterms];
    fibo_series[0]=0;
    fibo_series[1]=1;
    for(i=2;i<nterms;i++)
     {
        fibo_series[i]=fibo_series[i-1]+fibo_series[i-2];
     }
    printf("Firs %d fibonacci numbers are below: \n",nterms);
    for(i=0;i<nterms;i++)
     {
        printf("%d \t",fibo_series[i]);
     } 
    return 0; 

 }