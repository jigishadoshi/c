// check whether a traingle can be formed with the given values for the angles.
#include<stdio.h>
void main()
{
    int angle1,angle2,angle3,total;
    
    printf("enter angle1 ");
    scanf("%d",&angle1);
    printf("enter angle2 ");
    scanf("%d",&angle2);
    printf("enter angle3 ");
    scanf("%d",&angle3);

    if (angle1<1 || angle2<1 || angle3<1)
    {
        printf("invalid input");
    }

    else
    {
         total=angle1+angle2+angle3;
    if (total==180)
    {
        printf("the traingle can be formed.");
    }
    else
    {
        printf("the traingle can not be formed.");
    }
    }
    
   
    

}
// The three interior angles of a triangle will always have a sum of 180°