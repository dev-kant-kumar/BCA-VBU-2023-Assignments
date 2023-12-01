// Write a program that uses pointer as a function argument.
#include<stdio.h>
void finalprice(float *a,int b);
int main()
 {
    int no_of_iteam;
    float totalprice=0.0,finalpay=0.0;
    printf("\n");
    printf("Discount available : 5 percent on purchasing of 1000 rupees and 8 percent on above 5000 rupees \n\n");
    printf("Enter no of iteam you have purchased : ");
    scanf("%d",&no_of_iteam);
    float price[no_of_iteam];
    for(int i=0;i<no_of_iteam;i++)
     {
        printf("Enter price of iteam %d :",i+1);
        scanf("%f",&price[i]);
        totalprice+=price[i];
     } 
    finalprice(&finalpay,totalprice);
    printf("Total amout :%.1f \n",totalprice);
    printf("After discount :%.1f \n",finalpay);
    return 0;
 }
void finalprice(float *a, int b)
 {
    if(b>=1000 && b<=5000)
     {
        *a=b-(b*5/100);
     }
     else if(b>5000)
      {
        *a=b-(b*8/100);
      }
     else
      {
        *a=b;
      }  
 } 