#include<stdio.h>

int sum_of_even_factors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
       if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iNumber;

    printf("Enter number :");
    scanf("%d",&iNumber);

    printf("%d\n",sum_of_even_factors(iNumber));

    return 0;
}