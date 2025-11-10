#include<stdio.h>

double SquareMeter(int iValue)
{  
    float fMeter = 0.0;

    fMeter = iValue * 0.0929;

    return fMeter;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Area in meter is %lf",dRet);

    return 0;

}