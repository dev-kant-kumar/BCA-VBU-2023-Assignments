// write a program for the followings:
// a. Function with no arguments and no return values
// b. Function with arguments and no return values
// c. Function with arguments and one return value
// d. Function with no arguments and one return value
// e. Function that return multiple return value
#include<stdio.h>
void add();               //Function with no arguments and no return values
void sub(int a,int b);    //Function with arguments and no return values
int mul(int a,int b);     //Function with arguments and one return value
int div();                //Function with no arguments and one return value
int solve(int a,int b ,int *sum,int *subt ,int *mult, int *divi);   //Function that return multiple return value          
 
int a,b,sum,subt,mult,divi;
int main()
 {
    char select;
    printf("a-addition \ns-subtraction \nm-multiplication \nd-division \nA-to perform all operation before \n");
    printf("Enter from options above : ");
    scanf("%c",&select);
    switch (select)
    {
    case 'a': add();
              break;
    case 's':
             printf("Enter two numbers : ");
             scanf("%d%d",&a,&b);
             sub(a,b);
             break;
    case 'm':
              printf("Enter two numbers : ");
              scanf("%d%d",&a,&b);
              printf("Product of %d and %d is %d \n",a,b,mul(a,b));
              break;
    case 'd':printf("Division is %d \n",div());
             break; 
    case 'A':printf("Enter two numbers : ");
             scanf("%d%d",&a,&b);
             solve(a,b,&sum,&subt,&mult,&divi);
             printf("Sum :%d \nSub :%d \nMul :%d \nDiv :%d \n",sum,subt,mult,divi);
             break;
    default: printf("Enter valid option \n");
            break;
    }
  return 0;  
 }

void add()
 {
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Sum of %d and %d is %d \n",a,b,a+b);
 }
void sub(int a,int b)
 {
    printf("Difference of %d and %d is %d \n",a,b,a-b);
 }
int mul(int a,int b)
 {
    return a*b;
 }
int div()
 {
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    return a/b;
 } 
int solve(int a, int b,int *sum,int *subt ,int *mult, int *divi)
 {
    *sum=a+b;
    *subt=a-b;
    *mult=a*b;
    *divi=a/b;
 } 


