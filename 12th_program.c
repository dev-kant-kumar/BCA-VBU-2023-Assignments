// Write a program that shows the use of forward jump and backward jump of goto statement.
#include<stdio.h>
int main()
 {
    int num,n;
    a:
    printf("Enter a number :");
    n=scanf("%d",&num);
    if(n!=1) // Check that user not enter a letter or any special characters.
     {
        printf("Invalid Input! \n");
        scanf("%*s");
        goto a;  // Backward jump to label 'a'
     }
    else if(num<0)
     {
        printf("Enter a positive number only! \n");
        goto a; // Backward jump to label 'a'
     }
    else if(num%2==0)
    {
        goto b; // Forward jump to label 'b'
    }
    else
    {
        goto c; // Forward jump to label 'c'
    }
    b:
    printf("You have entered an even no\n");
    goto d; // Forward jump to label 'd'
    c:
    printf("You have entered an odd number \n");
    d:
    return 0;

 }
