// check whether year is millenium or not.

#include<stdio.h>
void main()
{
    int year;
    printf("enter year");
    scanf("%d",&year);

    if (year % 1000==0)
    {
        printf( " the year is millenium");
    }
    
    else
    {
        printf("the year is not millenium");
    }

    printf("\n end");
}