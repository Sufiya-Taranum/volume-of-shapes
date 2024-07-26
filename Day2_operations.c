#include"Day2_header.h"
#include<stdio.h>

int check_for_armstrong_number(int number)
{
    int rem=0,sum=0;
    int n=number;
    while(number>0)
    {
    rem=number%10;
    sum=sum+(rem*rem*rem);
    number=number/10;
    }
    if(sum==n)
        return 1;
    return 0;
}

int check_for_amicable_number(int num1,int num2)
{
    int sum1=0,sum2=0;
    for(int i=1;i<num1;i++)
    {
        if(num1%i==0)
        {
            sum1=sum1+i;
        }

    }
    //printf("\n sum1=%d",sum1);
    for(int j=1;j<num2;j++)
    {
        if(num2%j==0)
        {
            sum2=sum2+j;
        }
    }
    //printf("\n sum2=%d",sum2);
    if((num2==sum1) && (num1==sum2))
        return 1;
    return 0;
}

int add(int a,int b)
{
    return(a+b);
}
int sub(int a,int b)
{
    return(a-b);
}
int multiply(int a,int b)
{
    return (a*b);
}
