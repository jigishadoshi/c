//  Write a C program to calculate final electricity bill based upon below given criteria. take monthly electricity unit from user as input. 

// units           price  per unit 
// <100            1
// >100 & <200     2 
// >200 & <300     3
// >300 & <400     4
// >400            5

// also calculate 5% percentage energy charge on total bill amount & display total amount 

#include<stdio.h>
void main()
{
    float unit,amount;
    printf("enter unit");
    scanf("%f",&unit);

    if (unit<100)
    {
        amount=(unit*5/100)+(unit*1);
        printf("amount is %.2f",amount);
    }
    else if (unit>=100 && unit<200)
    {
        amount=(unit*5/100)+(unit*2);
        printf("amount is %.2f",amount);
    }
     else if (unit>=200 && unit<300)
    {
        amount=(unit*5/100)+(unit*3);
        printf("amount is %.2f",amount);
    }
     else if (unit>=300 && unit<400)
    {
        amount=(unit*5/100)+(unit*4);
        printf("amount is %.2f",amount);
    }
     else if (unit>=400)
    {
        amount=(unit*5/100)+(unit*5);
        printf("amount is %.2f",amount);
    }
    
    
    
    

}