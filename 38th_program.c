// Write a program to illustrate the use of indirection operator(*) to access the value pointed by a ponter.
#include<stdio.h>
typedef struct student
 {
    int roll;
    char name[100];
    float height;
 }stu;
void print(stu *a);
int main()
 {
    stu s1;
    printf("Enter roll :");
    scanf("%d",&s1.roll);
    printf("Enter your name :");
    scanf(" %[^\n]s",s1.name);
    printf("Enter height :");
    scanf("%f",&s1.height);
    printf("\n");
    print(&s1);
    return 0;
 }
void print(stu *a)
 {
    printf("Roll :%d | Name :%s | Height :%.1f \n",a->roll,a->name,a->height);
 } 