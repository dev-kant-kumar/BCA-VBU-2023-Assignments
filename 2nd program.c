//Write a program that will print the area of circle, square, rectangle and triangle.
#include<stdio.h>
#include<math.h>
int main()
 {
    char select;
    int radius,side,area_square, length,width,area_rectangle,base, height;
    float area_circle, area_triangle;
    printf("Enter c for Circle \n");
    printf("Enter s for Square \n");
    printf("Enter r for rectangle \n");
    printf("Enter t for triangle \n");
    printf("Enter first letter from above to calculate their area : ");
    scanf("%c",&select);
    switch(select)
     {
        case 'c': printf("Enter requested details to calculate area of circle \n");
                  printf("Enter radius : ");
                  scanf("%d",&radius);
                  area_circle=3.14*pow(radius,2);
                  printf("Area of Circle =%f \n",area_circle);
                  break;
        case 's': printf("Enter requested details to calculate area of square \n");
                  printf("Enter Side : ");
                  scanf("%d",&side);
                  area_square=side*side;
                  printf("Area of Square =%d \n",area_square);
                  break;
        case 'r': printf("Enter requested details to calculate area of rectangle \n");
                  printf("Enter length : ");
                  scanf("%d",&length);
                  printf("Enter width : ");
                  scanf("%d",&width);
                  area_square=length*width;
                  printf("Area of Rectangle =%d \n",area_rectangle);
                  break;
        case 't': printf("Enter requested details to calculate area of triangle \n");
                  printf("Enter base : ");
                  scanf("%d",&base);
                  printf("Enter height : ");
                  scanf("%d",&height);
                  area_triangle=0.5*base*height;
                  printf("Area of Triangle =%f \n",area_triangle);
                  break;
        default: printf("You have entered invalid input! \n");


     }
   return 0;

   
 }

