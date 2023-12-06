// Write a program using pointer to compute the sum of all elements stored in an array.
#include<stdio.h>
int main()
 {
    int size,n,m;
    a:
    printf("Enter size of an array :");
    n=scanf("%d",&size);
    if(n!=1 || size<1)
     {
        printf("Invalid Input! Enter postive no only \n");
        scanf("%*s");
        goto a;
     }
    int arr[size],*ptr=arr,sum=0;
    for(int i=0;i<size;i++)
     {
        b:
        printf("Enter elements %d :",i+1);
        m=scanf("%d",&arr[i]);
        if(m!=1)
        {
            printf("Invalid Input! Enter any number \n"); //Ensure that user not enter any letter or special characters.
            scanf("%*s");
            goto b;
        }
        else
        {
            sum+=ptr[i];
        }
     }
    printf("Sum of all %d elements in array :%d \n",size,sum);
    return 0;
 }