#include<stdio.h>
void main()
{
    int num;
    num=1;
    while (num<=100)    
    {
        printf("%d ,",num);
        num=num+1;
    }

    int s_num,e_num;
    printf("\n enter starting number");
    scanf("%d",&s_num);
    printf("enter ending number");
    scanf("%d",&e_num);

    while (s_num<=e_num)
    {
        printf("%d, ",s_num);
        s_num= s_num+1;
    }
    
    
}