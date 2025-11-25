////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////

#include<stdio.h>                                        //For Input Output
#include<stdlib.h>                                       // For bool datataye

////////////////////////////////////////////////////////
//
// Fuction Name :  CountEven
// Description : It is use to check even count
// Input       :  Integer
// Output      :  Integer
// Author      : Siddhi Balkrushna Jagtap
// Date        : 22/11/2025
//
////////////////////////////////////////////////////////

int CountEven(int Arr[], int iLength)
{
    int  iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt <iLength;iCnt++)
    {   
       if((Arr[iCnt] % 2) == 0)
       {
             iCount++;
       }
    }   
    return iCount++;
}

////////////////////////////////////////////////////////
//
//       Entry Point Fuction 
//
////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements",iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    iRet = CountEven(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}