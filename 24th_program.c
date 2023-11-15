// Write a program that shows the use of switch statement.
#include<stdio.h>
void printTable(int n);
int main()
 {
    int num;
    printf("Enter a number betweeen 2 to 20 to print their table : ");
    scanf("%d",&num);
    switch(num)
     {
        case 2:  printTable(2);
                 break;
        case 3:  printTable(3);
                 break;
        case 4:  printTable(4);
                 break;
        case 5:  printTable(5);
                 break;
        case 6:  printTable(6);
                 break;
        case 7:  printTable(7);
                 break;
        case 8:  printTable(8);
                 break;
        case 9:  printTable(9);
                 break;
        case 10: printTable(10);
                 break;
        case 11: printTable(11);
                 break;
        case 12: printTable(12);
                 break;
        case 13: printTable(13);
                 break;
        case 14: printTable(14);
                 break;
        case 15: printTable(15);
                 break;
        case 16: printTable(16);
                 break;
        case 17: printTable(17);
                 break;
        case 18: printTable(18);
                 break;
        case 19: printTable(19);
                 break;
        case 20: printTable(20);
                 break;
        default: printf("Enter number between 2 to 20 only \n");
               

     }
   return 0;  
 }
void printTable(int n)
 {
    for(int i=1;i<=10;i++)
     {
        printf("%d x %d = %d \n",n,i,n*i);
     }
 } 