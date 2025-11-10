#include<stdio.h>

int CountFour(int iNo)
{
   int iFreq = 0;
   int iDigit = 0;

   while(iNo != 0)
   {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iFreq++;
        }
        
        iNo = iNo / 10;
   }
   return iFreq;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}