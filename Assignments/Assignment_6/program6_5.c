#include<stdio.h>   // Error

float Percentage(int iNo1, int iNo2)
{
    if (iNo1 <= 0)
    {
        printf("It is not valid");
    }
    float fAns = 0.0f;

    fAns = ((iNo1/iNo2) * 100.0);

    return fAns;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is : %f",fRet);

    return 0;
}