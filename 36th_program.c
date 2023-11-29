// Write a program to demonstrate use of arrays of structures and array within structures 
//This program takes student detail like roll,name,total marks of a paper,makes obtain in 5 subjects,and find total marks obtain in all subjects,percentage and print roll,name,total marks and percentage back to them.
#include<stdio.h>
typedef struct student
 {
    int roll;
    char name[100];
    int totalmarks;  // total marks of a paper
    int marks[5];
 }stu;
void takeData(stu *a) ;
void printData(stu a);
int main()
 {
    int no_of_students;
    printf("Enter the number of students to store their data : ");
    scanf("%d",&no_of_students);
    stu data[no_of_students];
    for(int i=0;i<no_of_students;i++)
     {
        takeData(&data[i]);
     }
    for(int i=0;i<no_of_students;i++)
     {
        printData(data[i]);
     } 
 } 
void takeData(stu *a) 
 {
    printf("Enter roll : ");
    scanf("%d",&a->roll);
    printf("Enter name : ");
    scanf(" %[^\n]s",a->name);
    printf("Enter total marks of a paper : ");
    scanf("%d",&a->totalmarks);
    printf("Enter marks of each subject below \n");
    for(int i=0;i<5;i++)
     {
        printf("Enter marks of sunject %d : ",i+1);
        scanf("%d",&a->marks[i]);
     }
    printf("Data recorded \n"); 

 } 
void printData(stu a)
 {
    int totalmarks=0;
    float percentage;
    for(int i=0;i<5;i++)
     {
        totalmarks+=a.marks[i];
     }
    percentage=(totalmarks*100)/(a.totalmarks*5);
    printf("Students Records \n\n");
    printf("Roll :%d | Name :%s | Total Marks :%d | Percentage :%.1f \n",a.roll,a.name,totalmarks,percentage);
 } 