////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////
#include<stdio.h>                                       // For Input Output
#include<stdlib.h>                                      // For bool datatype

////////////////////////////////////////////////////////
//
// Fuction Name :  Frequency
// Description : It is use to check difference between even and odd
// Input       :  Integer
// Output      :  Integer
// Author      : Siddhi Balkrushna Jagtap
// Date        : 22/11/2025
//
////////////////////////////////////////////////////////

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0, iEven = 0 ,iOdd = 0,iEvenOddDiff=0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }
    return iEvenOddDiff = iEven - iOdd;
}

////////////////////////////////////////////////////////
//
//       Entry Point Fuction 
//
////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int * p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d element :\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);
    printf("Result is %d",iRet);

    free(p);

    return 0;
}