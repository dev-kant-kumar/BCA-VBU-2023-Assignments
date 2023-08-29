//Write a program that finds the greatest number among three numbers.
#include <stdio.h>
int main()
 {
    int number1,number2,number3;
    printf("Enter first no  : ");
    scanf("%d",&number1);
    printf("Enter second no : ");
    scanf("%d",&number2);
    printf("Enter third no  : ");
    scanf("%d",&number3);
    if(number1>number2 && number1>number3)
     {
        printf("%d is greatest \n",number1);
       
     }
    else if(number2>number1 && number2>number3)
     {
        printf("%d is greatest \n",number2);
     }
    else if(number3>number1 && number3>number2)
     {
      printf("%d is greatest \n",number3);
     }
   else
    {
      printf("All three numbers are same =%d \n",number1);
    }
  return 0;
 }

 