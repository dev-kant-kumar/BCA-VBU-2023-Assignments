// Write a program using pointer to determine the length of character string.
#include<stdio.h>
int main()
 {
    int i=0,length=0,space=0;
    char name[100],*ptr;
    printf("Enter any string(suggestion :name,line of text):");
    fgets(name,100,stdin);
    ptr=name;
    while(ptr[i]!='\0')
     {
        if(ptr[i]==' ')
        {
            space++;
        }
        length++;
        i++;
     }
    printf("Length of charactrs string with spaces is %d \n",length-1);
    printf("Length of charactrs string without spaces is %d \n",length-space-1);
    return 0;
 }