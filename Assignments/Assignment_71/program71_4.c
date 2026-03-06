#include<stdio.h>

int Min(int iNo)
{
    static int iMin = 9;
    int iDigit = 0;

    if(iNo < 0)
    {
      iNo = -iNo;  
    }

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        Min(iNo / 10);
    }
    return iMin;
    
}
int main()
{
    int iRet = 0, iValue = 0;
    
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("%d",iRet);

    return 0;
}