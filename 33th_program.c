// Write a program that shows the nesting of functions.
// This program is on salting and password checking .
#include<stdio.h>
#include<string.h>
#include <ctype.h>

void takepassword();                         // This function take password
void takecpassword();                        // This function take confirm password
void checkpassword( char password[]);        // This function check length and strength of password
void salting(char password[]);               // This function perform salting related tasks
char input_password[9],confirm_password[9];  

int main()
 {
    takepassword();
    return 0;
 }

 // Sub function section
void takepassword()
 {
    printf("Enter your password : ");
    scanf("%s",input_password);
    checkpassword(input_password);
 } 
void takecpassword()
 {
    printf("Reenter your password : ");
    scanf("%s",confirm_password);
    if(strcmp(input_password,confirm_password)==0)
    {
        salting(input_password);
    }
   else
    {
        printf("Confirm password must be same \n");
        takecpassword();
    }  
 } 
void checkpassword(char password[])
 {
   if(strlen(password)==8)
    {
        int digit=0,smallcase=0,uppercase=0,specialchar=0;
        for(int i=0;password[i]!='\0';i++)
         {
            if(isdigit(password[i]))
             {
                digit++;
             }
            else if (islower(password[i]))
             {
                smallcase++;
             }
            else if (isupper(password[i]))
             {
                uppercase++;
             }  
            else if (ispunct(password[i]))
             {
                specialchar++;
             }
            else if (isspace(password[i]))
             {
                printf("Space is not allowed in password \n");
                takepassword();
             } 
         }
        if(digit>=1 && smallcase>=1 && uppercase>=1 && specialchar>=1) 
         {
            takecpassword();
         }
        else
         {
             printf("Password must have atleast one number,smallcase letters,uppercase letter and special characters(e.g., !, @, #, $, %, ^, &, *) \n\n");
             takepassword();
         } 

    }
   else
    {
        printf("Password must be 8 characters long \n");
        takepassword();
    } 
   
 }
 void salting(char password[])
  {
    char salt[]="123",salted_password[12];
    strcpy(salted_password,password);
    strcat(salted_password,salt);
    printf("Salted password = %s \n",salted_password);
  }