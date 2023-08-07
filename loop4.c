// 4] 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000
#include<stdio.h>
void main()
{
     int num,temp;
    num=1;
    temp=1;
    while (num<=3000)
    {
        printf("%d ,",num);
        temp=temp+3;
        num=num+temp;
        
        
    }
}
// 1
// 1+4=5
// 5+7=12
// 12+10=22
// 22+13=35
//  temp=temp+3;  1+3=4     4+3=7
//  num=num+temp; 1+4=5     5+7=12
