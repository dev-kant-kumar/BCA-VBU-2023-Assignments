// Write a program that counts number of students whose weight & height is less than 50kg & 170cm resp.
#include<stdio.h>
int main()
 {
    int no_of_students;
    
    printf("Enter the total numbers of students:");
    scanf("%d",&no_of_students);

    float weight[no_of_students], height[no_of_students];
    int i=1,weight_less_50kg=0,height_less_170cm=0;

    while(i<=no_of_students)
     {
        printf("Enter the weight of student %d : ",i);
        scanf("%f",&weight[i]);
        printf("Enter the height of student %d : ",i);
        scanf("%f",&height[i]);
        if(weight[i]<50.0)
         {
            weight_less_50kg++;
         }
        if(height[i]<170.0) 
         {
            height_less_170cm++;
         }
        i++;
     }
    printf("Total no of students whose weight is less than 50kg : %d \n",weight_less_50kg);
    printf("Total no of students whose height is less than 170cm: %d \n",height_less_170cm);
    return 0; 

 }