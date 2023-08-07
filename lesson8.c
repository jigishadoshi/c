// Write a print to find area of triangle get height and base from user using scanf.

#include<stdio.h>
void main()

{
    
float height,base,area;

printf("enter value of height ");
scanf("%f",&height);
printf("enter value of base ");
scanf("%f",&base);

area=height*base/2;

printf("area of traingle is %.2f",area);


}