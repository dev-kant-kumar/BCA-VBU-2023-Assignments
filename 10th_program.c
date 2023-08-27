//Write a program that shows the use of conditional operator.
#include<stdio.h>
int main()
 {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    number%2==0? printf("Entered number is even \n") : printf("Entered number is odd \n");
    return 0;
 } 
