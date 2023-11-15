//Write a program that reads marks of 50 students and count the number of students belonging to each of the following groups of marks:0-10,11-20,21-30,31-40......91-100 using array.
#include<stdio.h>
int main()
 {
    //Group1=0-10, Group2=11-20, Group3=21-30, Group4=31-40, Group5=41-50, Group6=51-60, Group7=61-70, Group8=71-80, Group9=81-90, Group10=91-100
    int i,students[50],marks_group[10];
    for(i=0;i<50;i++)
     {
        printf("Enter marks of student having roll no %d : ",i+1);
        scanf("%d",&students[i]);
     }
     i=0;
     while(i<10)
      {
        marks_group[i]=0;
        i++;
      }
    for(i=0;i<50;i++)
     {
        if(students[i]>=0 && students[i]<=10)
         {
            
            marks_group[0]++;
         }
        else if(students[i]>=11 && students[i]<=20)
         {
            marks_group[1]++;
         } 
        else if(students[i]>=21 && students[i]<=30)
         {
            marks_group[2]++;
         }
        else if(students[i]>=31 && students[i]<=40)
         {
            marks_group[3]++;
         } 
        else if(students[i]>=41 && students[i]<=50)
         {
            marks_group[4]++;
         } 
        else if(students[i]>=51 && students[i]<=60)
         {
            marks_group[5]++;
         } 
        else if(students[i]>=61 && students[i]<=70)
         {
            marks_group[6]++;
         } 
        else if(students[i]>=71 && students[i]<=80)
         {
            marks_group[7]++;
         }
        else if(students[i]>=81 && students[i]<=90)
         {
            marks_group[8]++;
         }
        else
         {
            marks_group[9]++;
         }            
     } 
    printf("\n"); 
    printf("No of students belonging to respective groups are below \n");
    for(i=0;i<10;i++)
     {
        printf("Group%d (%d%d-%d) : %d \n",i+1,i,1,i+10,marks_group[i]);
     }
   return 0;  

 }