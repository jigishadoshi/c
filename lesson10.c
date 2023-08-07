// Write a programe to findout wether the given number is odd or even 

#include<stdio.h>
void main()
{
    int number;

    printf("enter number");
    scanf("%d",&number);
    
    if (number % 2 ==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("\n the number is odd");
    }
    
}
