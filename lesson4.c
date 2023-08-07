// convert 24 hours time format into 12 hour format.

#include<stdio.h>
void main()
{
    int hr,min,twelve,ans;
    twelve=12;
    printf("enter time:");
    scanf("%d:%d",&hr,&min);

    // if(hr==0)
    // {
    //     printf("12:%.2d AM",min);
    // }
    // else if(hr<12)
    // {
    //     printf("%d:%.2d AM",hr,min);
    // }
   
    
    if(hr>12)
   
    {
        ans=hr-twelve;
        printf("%d:%d PM",ans,min);
    }
   
    else if(hr==12)
    {
        printf("%d:%.2d PM",hr,min);
    }
   
    else
    printf("%d:%.2d AM",hr,min);

    printf("\n end");
}