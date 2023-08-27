////Write a program that will print the area of circle, square, rectangle and triangle.
#include <stdio.h>

int main()
 {
    char select;
    int radius,side,length,width,base,height,area_square,area_rectangle;
    float area_circle,area_triangle;
    printf("Enter c to calculate area of circle \n");
    printf("Enter s to calculate area of square \n");
    printf("Enter r to calculate area of rectangle \n");
    printf("Enter t to calculate area of triangle \n");
    printf("Enter first letter from above to calculate their area : ");
    scanf("%c",&select);
    switch(select)
     {
      case 'c': printf("Enter requested detail for circle \n");
                printf("Enter radius : ");
                scanf("%d",&radius);
                area_circle=3.14*(radius*radius);
                printf("Area of Circle =%f \n",area_circle);
                break;
      case 's': printf("Enter requested detail for square \n");
                printf("Enter side : ");
                scanf("%d",&side);
                area_square=side*side;
                printf("Area of Square =%d \n",area_square);
                break;
      case 'r': printf("Enter requested details for rectangle \n");
                printf("Enter length : ");
                scanf("%d",&length);
                printf("Enter width : ");
                scanf("%d",&width);
                area_rectangle=length*width;
                printf("Area of Rectangle =%d \n",area_rectangle);
                break;
      case 't': printf("Enter details for triangle \n");
                printf("Enter base : ");
                scanf("%d",&base);
                printf("Enter height : ");
                scanf("%d",&height);
                area_triangle=0.5*base*height;
                printf("Area of triangle =%f \n",area_triangle);
                break;
      default: printf("You have entered invalid input!");

                
     }
    return 0;

  



    
 }