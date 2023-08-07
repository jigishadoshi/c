// 5] 1, 8, 27, 64 ,125 ... 1000.---incompleted
#include<stdio.h>
void main()
{
     int num,temp;
    num=1;
    temp=6;
    while (num<=1000)
    {
        printf("%d ,",num);
        temp=temp+1;  
        num=num+temp; 
        
    }
}

// 1
// 1+7=8
// 8+19=27
// 27+37=64
// 6*===6,12,18...