// check whether a triangle is equilateral,isosceles or scalene.
#include<stdio.h>
void main()
{
     int side1,side2,side3,total;
    
    printf("enter side1 ");
    scanf("%d",&side1);
    printf("enter side2 ");
    scanf("%d",&side2);
    printf("enter side3 ");
    scanf("%d",&side3);

    if (side1==side2 && side2==side3 && side3==side1)
    {
        printf("the traingle is equilateral");
    }

    else if (side1==side2 || side2==side3 || side3==side1)
    {
         printf("the traingle is isosceles");
    }
    
    else if (side1!=side2 && side2!=side3 && side3!=side1)
    {
        printf("the traingle is scalene");
    }
    
    
}

// every sides equal--equilateral
// two or more sides equal--isosceles
// none of the sides equal--scalene