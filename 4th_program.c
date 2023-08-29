//Write a program to find simple interest and compound interest.
//Simple Interest = (Principal * Rate * Time)100
//Compound Interest = Principal * (1 + Rate/100)^Time - principal
#include <stdio.h>
#include <math.h>
int main()
 {
    int principal,time;
    float rate,simple_interest,rate_part,amount_on_ci,compound_interest;
   
    printf("Enter requested details \n");
    printf("Enter principal    : ");
    scanf("%d",& principal);
    printf("Enter rate         : ");
    scanf("%f",&rate);
    printf("Enter time in year : ");
    scanf("%d",&time);
    simple_interest=(principal*rate*time)/100;
    rate_part=1+rate/100;
    amount_on_ci=principal*(pow(rate_part,time));
    compound_interest=amount_on_ci-principal;
    printf("Simple Interest is %f \n", simple_interest);
    printf("Compund Intrest is %f \n",compound_interest);
  return 0;
 }