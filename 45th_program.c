// Write a program to read data from the keyboard, 
// write it to a file called INPUT, again read the same data from the INPUT file, and display it on the screen.
// I have named text file:45th_program.txt as per my convenience
#include<stdio.h>
int no_of_students,n;
void input();
void print();
int main()
 {
   a:
    printf("Enter no of students : ");
    n=scanf("%d",&no_of_students);
    if(n!=1) //Ensure that user not enter any letters or special characters.
    {
      printf("Invalid Input! Enter positive no only \n");
      scanf("%*s");
      goto a;

    }
    else if(no_of_students<1)
     {
        printf("Enter valid no of students \n");
        goto a;
     }
    else
     {
        printf("Enter student details asked below \n");
        for(int i=0;i<no_of_students;i++)
         {
            input();
         }
        print(); 
     }
    return 0; 
 }
void input()
 {
    char name[100];
    int roll;
    float marks;
    FILE *fptr;
    fptr=fopen("45th_program.txt","a");
    if(fptr==NULL)
     {
      printf("Error opening the file \n");
      return;
     }
    printf("Enter your name :");    //Name
    scanf(" %[^\n]s",name);
    fprintf(fptr,"%s \t",name);

    printf("Enter roll : ");        // Roll 
    scanf("%d",&roll);
    fprintf(fptr,"%d \t",roll);

    printf("Enter marks : ");        //Marks
    scanf("%g",&marks);
    fprintf(fptr,"%g \n",marks);
    fclose(fptr);
 }
void print()
 {
   char name[100];
    int roll;
    float marks;
    FILE *fptr;
    fptr=fopen("45th_program.txt","r");
    if(fptr==NULL)
     {
        printf("File Not Found! \n");
        return;
     }
    printf("We have these records of students \n");
    while (fscanf(fptr, " %[^\t]s", name) == 1)
     {
       fscanf(fptr,"%d",&roll);
       fscanf(fptr,"%f",&marks);
       printf("Name :%s | Roll :%d | Marks :%g \n",name,roll,marks);
     }
    fclose(fptr); 
 } 