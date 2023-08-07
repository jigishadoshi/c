// write a program to find area of two triangle and check who is larger .


#include<stdio.h>
void main()
{
   float height1, base1,height2,base2,area1,area2;
   printf("enter value of traingle1's height and base");
   scanf("%f,%f",&height1,&base1);
   printf("enter value of traingle2's height and base");
   scanf("%f,%f",&height2,&base2);

    area1=(height1*base1/2);
    area2=(height2*base2/2);

    printf("area1 is %.2f ",area1);
    printf("\n area2 is %.2f ",area2);

    if (area1>area2)
    {
       printf("\n triangle1 is larger");
    }
    else if(area2>area1)
    {
        printf("\n triangle2 is larger");
    }
    else
    {
        printf("\n both are similar");
    }
    
    
   

}           