////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////
#include<stdio.h>                                        // For input output
#include<stdlib.h>                                       // For library function

///////////////////////////////////////////////////////
//
// Fuction Name : maximum
// Description :  It is use to find Maximum number 
// Input       :  Integer
// Output      :  Integer
// Author      : Siddhi Balkrushna Jagtap
// Date        : 22/11/2025
//
////////////////////////////////////////////////////////

int Maximum(int Arr[],int iLength)
{
    int iCnt = 0, iMax = Arr[0];

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt] ;
        }
    }
    return iMax;

}

///////////////////////////////////////////////////////
//
//       Entry Point Fuction 
//
////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the number of elements");
    scanf("%d",&iSize);

    p = (int*) malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum(p,iSize);

    printf("Largest Number is %d",iRet);

    free(p);

    return 0;
}