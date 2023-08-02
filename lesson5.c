#include<stdio.h>
void main()
{
    int value;
    printf("enter the value of reading:");
    scanf("%d",&value);

    if(value<140)
    printf("diabetes is normal");

    else if(value<199)  
    printf("you are pre-diabetic");

    else
    printf("you are diabetic");

    printf("\n end");
}
