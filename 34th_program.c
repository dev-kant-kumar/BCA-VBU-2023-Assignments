// Write a program to pass array into function.
#include<stdio.h>
void reverseArr(int a[],int n);
int main()
 {
    int element;
    printf("Enter no of elements you want in array : ");
    scanf("%d",&element);
    int arr[element];
    printf("Enter the %d elements of array \n",element);
    for(int i=0;i<element;i++)
     {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
     }
    reverseArr(arr,element);
    return 0;
 }
void reverseArr(int a[],int n)
 {
    int revarr[n];
    for(int i=0;i<n;i++)
     {
        revarr[i]=a[n-i-1];
     }
     printf("Reverse of elements in array is belwo \n");
     for(int i=0;i<n;i++)
      {
        printf("%d \t",revarr[i]);
      }
 } 