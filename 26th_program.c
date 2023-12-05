// Write a program that shows the difference between scanf() and gets() for string.
// Comment out rest parts to gets proprer output. first is-scanf("%s",name),second is-scanf(" %[^\n]s",name) and third is-gets(name).
#include<stdio.h>
int main()
 {
    char name[50];
    printf("Enter your full name : ");
    scanf("%s",name);       // This functon only reads single world string.
    printf("%s \n",name);

    printf("Enter your full name : ");
    scanf(" %[^\n]s",name);  //Alternate way to reads multi words string.
    printf("%s \n",name);

    printf("Enter your full name : ");
    gets(name);             // This is string function which can reads multi words string.
    printf("%s \n",name);
 } 