// calculate income tax,yearly gross income,net income from monthly income given by user.
// yearly income          tax rate
// <300000                 5%
// >=300,000 < 5,00,000    10%
// >=500,000 < 8,00,000    20%
// >=8,00,000              30%

#include<stdio.h>
void main()
{
    // input monthly income
    int monthly,yearly,tax_amount,net_income;
    printf("enter monthly income");
    scanf("%d",&monthly);

    //yearly income
    yearly=monthly*12;
    printf("\n yearly gross income is %d",yearly);

    if (yearly<300000)
    {
        tax_amount=yearly*0.05;
        printf("\n tax amount is %d",tax_amount);
        net_income=yearly-tax_amount;
        printf("\n net income is %d",net_income);
    }
    else if (yearly>=300000 && yearly<500000)
    {
        tax_amount=yearly*0.1;
        printf("\n tax amount is %d",tax_amount);
        net_income=yearly-tax_amount;
        printf("\n net income is %d",net_income);
    }
     else if (yearly>=500000 && yearly<800000)
    {
        tax_amount=yearly*0.2;
        printf("\n tax amount is %d",tax_amount);
        net_income=yearly-tax_amount;
        printf("\n net income is %d",net_income);
    }

     else if (yearly>=8,00,000)
    {
        tax_amount=yearly*0.3;
        printf("\n tax amount is %d",tax_amount);
        net_income=yearly-tax_amount;
        printf("\n net income is %d",net_income);
    }
    


}