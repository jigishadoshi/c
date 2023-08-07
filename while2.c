//print a pyramid

#include<stdio.h>
void main()
{
    int j,i;
    
    i=1;

    while (i<=5)
    {
       j=1; 
    while (j<=i)
    {
         printf("*");
         j++;
   
    }
    printf("\n");
    i++;
    }
   
   


   
}

    // j=j+1;
    // printf("**\n");
    // j=j+1;
    // printf("***\n");