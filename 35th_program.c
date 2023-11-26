// Write a program to read and print employee's details using structure.
#include<stdio.h>
typedef struct employee
 {
    char employeeID[9];
    char employeeName[100];
    int age;
    float salary;
    char department[100];
    char jobTitle[100];
    char contactNo[11];
 }emply;
void dataEntry(emply *a);
void checkData(emply a); 
int main()
 {
    int no_of_employee;
    printf("Enter the no of employee : ");
    scanf("%d",&no_of_employee);
    emply empData[no_of_employee];
    printf("Enter employee details \n");
    for(int i=0;i<no_of_employee;i++)
     {
        dataEntry(&empData[i]);
     }
    printf("We have these records \n");
    for(int i=0;i<no_of_employee;i++)
     {
        checkData(empData[i]);
     } 
   return 0;  
 }
void dataEntry(emply *a)
 {
     printf("Enter 8 digits employeeID : ");
     scanf("%s",a->employeeID);
     printf("Enter name : ");
     scanf(" %[^\n]s",a->employeeName);
     printf("Enter age : ");
     scanf("%d",&a->age);
     printf("Enter salary : ");
     scanf("%f",&a->salary);
     printf("Enter department : ");
     scanf(" %[^\n]s",a->department);
     printf("Enter jobtitle : ");
     scanf(" %[^\n]s",a->jobTitle);
     printf("Enter contact no : ");
     scanf(" %[^\n]s",a->contactNo);
     printf("\n\n");
 }
void checkData(emply a)
 {
    printf("EmployeeID :%s | Name :%s | Age :%d | Salary :%.1f | Department :%s | JobTitle :%s | Contact No :%s \n",a.employeeID,a.employeeName,a.age,a.salary,a.department,a.jobTitle,a.contactNo);
 } 