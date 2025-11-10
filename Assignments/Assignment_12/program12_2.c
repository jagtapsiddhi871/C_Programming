#include<stdio.h>

int count_factors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iNumber;

    printf("Enter number :");
    scanf("%d",&iNumber);

    printf("%d\n",count_factors(iNumber));

    return 0;
}