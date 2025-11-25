///////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////
#include<stdio.h>                                      // For input output
#include<stdlib.h>                                     // For library function

///////////////////////////////////////////////////////
//
// Fuction Name : Digits
// Description :  It is use to find 3 digits numbers
// Input       :  Integer
// Output      :  Integer
// Author      : Siddhi Balkrushna Jagtap
// Date        : 22/11/2025
//
////////////////////////////////////////////////////////

void Digits(int Arr[],int iLength)
{
    int iCnt = 0, iNo = 0,iCount = 0;

    printf("Numbers containing digit 3 are:\n");

    for(iCnt = 0; iCnt< iLength ; iCnt ++)
    {
        iNo = Arr[iCnt];
        iCount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iNo = iNo / 10;
            iCount++;
        }

        if(iCount == 3)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
    printf("\n");
    
}
///////////////////////////////////////////////////////
//
//       Entry Point Fuction 
//
////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iCnt = 0, iValue = 0;
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

    Digits(p,iSize);

    free(p);

    return 0;
}