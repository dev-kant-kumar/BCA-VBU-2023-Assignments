// Write a program that shows the matrix addition.
#include<stdio.h>
int main()
 {
    int row1,column1,i,j,a[100][100],b[100][100],sum[100][100];
    printf("Matrix addition are defined on same no rows and columns for both matix,so asking only for first matrix \n");
    printf("Enter the no of rows of first matrix : ");
    scanf("%d",&row1);
    printf("Enter the no of columns of first matrix : ");
    scanf("%d",&column1);
    printf("\n");
    // int a[row1][column1],b[row1][column1],sum[row1][column1];
    // Taking input of elements of first matrix.
    printf("Enter the %d elements of first matrix \n",row1*column1);
    for(i=0;i<row1;i++)
     {
        for(j=0;j<column1;j++)
         {
            printf("Enter %d element of %d row : ",j+1,i+1);
            scanf("%d",&a[i][j]);
         }
     }
    // Taking input of elements of second matrix.
    printf("\n");
    printf("Enter the %d elements of second matrix \n",row1*column1);
    for(i=0;i<row1;i++)
     {
        for(j=0;j<column1;j++)
         {
            printf("Enter %d element of %d row : ",j+1,i+1);
            scanf("%d",&b[i][j]);
         }
     }
    //Performing addition and printing output
    printf("\n");
    printf("Result of addition of Matrix first and Second is below \n");
    for(i=0;i<row1;i++)
     {
        for(j=0;j<column1;j++)
         {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d \t",sum[i][j]);
         }
         printf("\n");
     } 
   return 0;   
 }
