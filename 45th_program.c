// Write a program to read data from the keyboard, 
// write it to a file called INPUT, again read the same data from the INPUT file, and display it on the screen.
// I have named text file:45th_program.txt as per my convenience
#include<stdio.h>
int no_of_students;
void input();
void print();
int main()
 {
   a:
    printf("Enter no of students : ");
    scanf("%d",&no_of_students);
    if(no_of_students<1)
     {
        printf("Enter valid no of students \n");
        scanf("%*s");
        goto a;
     }
    else if(no_of_students>=1)
     {
        printf("Enter student details asked below \n");
        for(int i=0;i<no_of_students;i++)
         {
            input();
         }
        print(); 
     }
    else
     {
        printf("Enter valid no of students \n");
        scanf("%*s");
        goto a;
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
    printf("Enter your name :");    //Name
    scanf(" %[^\n]s",name);
    fprintf(fptr,"%s \t",name);

    printf("Enter roll : ");        // Roll 
    scanf("%d",&roll);
    fprintf(fptr,"%d \t",roll);

    printf("Enter marks : ");        //Marks
    scanf("%f",&marks);
    fprintf(fptr,"%f \n",marks);
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
     }
    printf("We have these records of students \n");
    while (fscanf(fptr, " %[^\t]s", name) == 1)
     {
       fscanf(fptr,"%d",&roll);
       fscanf(fptr,"%f",&marks);
       printf("Name :%s | Roll :%d | Marks :%.1f \n",name,roll,marks);
     }
    fclose(fptr); 
 } 