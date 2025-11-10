#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiff = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<= iNo;iCnt++)
    {
        if((iCnt %2 ) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
        else
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }
    iDiff = iEvenFact - iOddFact;

    return iDiff;


}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}