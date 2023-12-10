// Write a function that return pointer.
// This program is based on adding two numbers. 
// Condition:Takes an array of numbers and target element . we'll find two numbers whose sum will equal to target element  and return the indices of that element in array form
#include<stdio.h>
#include<stdlib.h>
long * addtwoNo(long *nums,long target,int sizeNums);
void screen();
int main()
 {
    screen();
    return 0;
 }
void screen()
 {
    int elements,m,n;
    long *ptr2,target;
    
    a:
    printf("Enter the no of elements do you want in array : ");         // Taking array 
    m=scanf("%d",&elements);
    //Checking the user only enter number as no of elements
    if(m!=1)
     {
        printf("Invalid Input! Only numbers are allowed \n");
        scanf("%*s"); 
        goto a;
     }
    else if(elements<1)
     {
        printf("Enter positive number! \n");
        scanf("%*s");
        goto a;
     }
    else
     {
        long arr[elements];
         printf("Enter the %d elments of array \n",elements);
         for(int i=0;i<elements;i++)
          {
            b:
             printf("Enter element %d : ",i+1);
             n=scanf("%ld",&arr[i]);
             if(n!=1)
              {
                printf("Invalid Input! Only numbers can be elements of array \n");
                scanf("%*s");
                goto b;
              }
             else if(arr[i]>=4294967296 && arr[i]<=4294967295)
             {
                printf("Your numbers exceed the allowed limit of 32 bits interger \n");
                printf("Enter the between range of 32 bits integer \n ");
                goto b;
             } 
              }
        // Taking target elements 
        printf("Enter the target element : ");
        scanf("%ld",&target); 
        ptr2=addtwoNo(arr,target,elements);
        printf("Index of elements whose sum of values is equal to target elements are below \n");
        printf("[%d,%d]",ptr2[0],ptr2[1]);    
     } 
    
 } 
long * addtwoNo(long *nums,long target,int sizeNums)
 {
    long *arr1;
    int contain=sizeNums,choice;
    arr1=(long *)malloc(2*sizeof(long));
    
    for(int i=0;i<sizeNums;i++)
     {
        for(int j=0;j<sizeNums;j++)
         {
            printf("%ld and %ld \n",nums[i],nums[j]);
            if((nums[i]+nums[j])==target)
             {
                arr1[0]=i;
                arr1[1]=j;
                break;
                return arr1;
             }
         }

     }
     printf("No such pair of elements can add up to target \n");
     printf("Try Again with different elements \n");
     printf("Select from these options \n Enter 1 for re-renter array and target elements \n Enter 0 to exit \n");
     scanf("%d",&choice);
     switch(choice)
      {
         case 0 : printf("You exited \n");
                  break;
         case 1 :printf("Re-enter your array and target element \n"); 
                 screen();
         default :
                 printf("Enter Valid Option only! \n");                
      } 
 } 