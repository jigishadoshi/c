// Write a print to find area and volume of  cylinder get height and radius  from user using scanf.

#include<stdio.h>
void main()
{
    float pi,height,radius,area,volume;
    pi=3.14;
    printf("enter height");
    scanf("%f",&height);
    printf("enter radius");
    scanf("%f",&radius);

    area=(2*pi*radius*height)+(2*pi*radius*radius);
    volume=pi*radius*radius*height;
    printf("\n area of cylinder is %.2f",area);
    printf("\n volume of cylinder is %.2f",volume);

}