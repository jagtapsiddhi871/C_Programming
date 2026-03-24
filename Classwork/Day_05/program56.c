//Prime number
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Input : 6 ,  iCnt =2
    // Input : 7 , iCnt = 3

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;              // Optimization
        }
    }

    if(iCnt > (iNo/2))   // No Factors
    {
        return true;
    }
    else                  // Atleast one factor      
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a prime number\n",iValue);
    }
    else
    {
        printf("%d is  not a prime number\n",iValue);
    
    }
    return 0;
}

/*
    Time Complexity : for prime - N/2
    Time Complexity : for non - prime = either 1 or 2

*/