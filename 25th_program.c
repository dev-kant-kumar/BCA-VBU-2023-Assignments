// Write a program that read a line of text containing a series of words using of getchar() and putchar() function.
#include<stdio.h>
int main()
 {
    char ch;
    printf("Enter your line of text : ");
    while(ch!='\n')
     {
        ch=getchar();
        putchar(ch);
     }
    printf("The above line is what you entered \n");
    printf("\n");
    return 0; 
 }