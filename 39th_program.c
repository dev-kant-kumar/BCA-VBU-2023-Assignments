// Wrire a program that shows the use of chain of pointer.
#include<stdio.h>
#include<stdlib.h>
int main()
 {
    int *ptr,**ptr1=&ptr;
    ptr=(int *)malloc(sizeof(int));
    printf("Enter a number :");
    scanf("%d",ptr);
    printf("Address of ptr :%p \n",(void *)ptr);
    printf("Entered number :%d \n",*ptr);
    printf("Address of ptr :%p \n",(void *)ptr1);
    printf("Value at ptr1  :%d \n",**ptr1);
    free(ptr);
    return 0;
 }