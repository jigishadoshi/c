// write a programe to print following pattern 
// 1]1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 10000

#include<stdio.h>
void main()
{
    int num,temp;
    num=1;
    temp=1;
   while (num<=1000)
   {
     printf("%d, ",num);
     temp=temp+4;
    num=num+temp;
   }
     
   

    // temp=temp+4;
    // num=num+temp;
    // printf("%d ",num);

    // temp=temp+4;
    // num=num+temp;
    // printf("%d",num);

}

// 1
// 1+5=6
// 6+9=15
// 15+13=28
// 1-5-9-13==4 increament

