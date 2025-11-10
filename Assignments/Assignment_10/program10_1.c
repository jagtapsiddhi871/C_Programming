#include<stdio.h>

double CircleArea(float fRadius)
{
    float fArea = 0.0;

    float fPI = 3.14;

    fArea = fPI * fRadius *fRadius;

    return fArea;
}
int main()    
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %lf",dRet);

    return 0;
}