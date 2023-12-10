//Write a program that covert temperature from Celsius to Fahrenheit and vice versa.
#include <stdio.h>
int main()
 {  int select;
    float celsius,fahrenheit;
    float convert_to_fahrenheit, convert_to_celsius;
    printf("Enter 1 to convert celsius to fahrenheit \n");
    printf("Enter 2 to convert fahrenheit to celsius \n");
    printf("Enter 1 or 2 from options: ");
    scanf("%d",&select);
    switch(select)
     {
        case 1: printf("Enter requested detail for temperature conversion \n");
                printf("Enter celsius : ");
                scanf("%f",&celsius);
                convert_to_fahrenheit=(celsius*9/5)+32;
                printf("%f celsius into fahrenheit =%f \n",celsius,convert_to_fahrenheit);
                break;

        case 2: printf("Enter requested detail for temperature conversion \n");
                printf("Enter fahrenheit : ");
                scanf("%f",&fahrenheit);
                convert_to_celsius=(fahrenheit-32)*5/9;
                printf("%f fahrenheit into celsius =%f \n",fahrenheit,convert_to_celsius);
                break;

        default: printf("You have entered invalid input! \n");
                
     }
   return 0;
 }


  


