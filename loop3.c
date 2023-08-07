// 3] 1, 4, 9 , 16 , 25, 36 , . . . 10000.
#include<stdio.h>
void main()
{
     int num,temp;
    num=1;
    temp=1;

    while (num<=10000)
    {
        printf("%d ,",num);
        temp=temp+2;
        num=num+temp;
    }
}

// 1
// 1+3=4
// 4+5=9
// 9+7=16
// 16+9=25
// 1-3-5-7-9....=2 increment
