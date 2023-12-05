// Write a program that uses the different types of string handing functions.
#include<stdio.h>
#include<string.h>
void usersignup();
void userlogin();
void userinterface();
void upassword();
void loginpassword();
char firstname[50],lastname[25],password[9],confirm_password[9],emailid[25],pannum[6];
char input_pan[5],login_id[10],login_password[12];

int main()
 {
    int choice;
    printf("Enter 1 for SignUp OR Enter 2 for LogIN : ");
    scanf("%d",&choice);
    if(choice==1)
     {
        usersignup();
     }
    else if(choice==2)
     {
        userlogin();
     }
    else
     {
        printf("Enter valid option \n");
        main();
     }  
   
   return 0;  
 }
void usersignup()
 {
    printf("Sign Up \n");
    printf("Enter your first name : ");
   //  fgets(firstname,50,stdin); having problem without taking input automatically it move to next line.I'll fix it later.
    scanf(" %[^\n]s",firstname);
    printf("Enter your last name : ");
   //  fgets(lastname,25,stdin);
    scanf(" %[^\n]s",lastname);
    printf("Enter your email id : ");
    scanf("%s",emailid);
    printf("Enter first 5 digit of your pan number : ");
    scanf("%s",pannum);
    upassword();
    printf("Your userid is %s \n",strncat(firstname,pannum,4));
    printf("You can use either your userid or pan to login \n\n");
    userlogin();

 }
 void userlogin()
  {
     printf("Login \n");
    printf("Enter first four digits of your pan number : ");
    scanf("%s",input_pan);
    if(strncmp(pannum,input_pan,4)==0)
     {
        loginpassword();
     }
    else
     {
        printf("Entered pan is not matched,enter valid pan or login with userid \n");
        printf("Enter your userid : ");
        scanf("%s",login_id);
        if(strcmp(strncat(firstname,pannum,4),login_id))
         {
            loginpassword();
         } 
        else 
         {
            printf("Invalid userid try again \n");
            userlogin();
         } 
     } 

  }
 void userinterface()
  {
    printf("WelCome %s \n",strupr(strcat(firstname,lastname)));
    printf("New Updates are:");
  } 
 void upassword()
  {
    
    printf("Enter your password : ");
    scanf("%s",password);
    printf("Reenter your password : ");
    scanf("%s",confirm_password);
    if(strcmp(password,confirm_password)==0)
     {
        printf("Password set successful \n");

     }
    else 
     {
        printf("Confirm password must be same \n");
        upassword();
     } 

  }
 void loginpassword()
  {
    printf("Enter your password : ");
    scanf("%s",login_password);
    if(strcmp(login_password,password)==0)
     {
        //User interfac
        userinterface();
     }
    else
     {
        printf("Entered passwprd is incorrect \n");
        loginpassword();
     } 

  } 