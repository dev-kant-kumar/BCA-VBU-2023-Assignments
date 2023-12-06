// Write a program that shows the use of forward jump and backward jump of goto statement.
#include<stdio.h>
int main()
 {
    int num;
    a:
    printf("Enter a number :");
    scanf("%d",&num);
    if(num<0)
     {
        printf("Enter valid positive number \n");
        goto a; // Backward jump to label 'a'
     }
    else if(num%2==0)
    {
        goto b; // Forward jump to label 'b'
    }
    else if(num%2!=0)
    {
        goto c; // Forward jump to label 'c'
    }
    b:
    printf("You have entered a even no\n");
    goto d;
    c:
    printf("You have entered an odd number \n");
    d:
    return 0;

 }
