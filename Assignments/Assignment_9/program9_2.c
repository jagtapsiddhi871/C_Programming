#include<stdio.h>

#define CONVERSION_RATE 70

int DollarToINR(int iNo)
{
    int iINR = 0;

    iINR = iNo * CONVERSION_RATE;

    return iINR;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR  is %d",iRet);

    return 0;
}