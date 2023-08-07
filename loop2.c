//  2]0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
#include<stdio.h>
void main()
{
     int num,temp;
    num=0;
    temp=0;
    while (num<=1000)
    {
       printf("%d ,",num);
       temp=temp+1;
       num=num+temp;
    }
}

// num+1=1
// num+2=3
// num+3=6
// num+4=10