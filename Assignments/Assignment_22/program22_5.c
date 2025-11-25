////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////
#include<stdio.h>                                        // For input output
#include<stdlib.h>                                       // For Library function

////////////////////////////////////////////////////////
//
// Fuction Name : Frequency 
// Description : It is use to check the how many numbers are present
// Input       :  Integer
// Output      :  Integer
// Author      : Siddhi Balkrushna Jagtap
// Date        : 22/11/2025
//
////////////////////////////////////////////////////////


int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
    
    }
    return iFreq;

}

////////////////////////////////////////////////////////
//
//       Entry Point Fuction 
//
////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *p = NULL;
   

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter number for search: ");
    scanf("%d",&iValue);

    iRet = Frequency(p, iSize,iValue);

    printf("%d",iRet);

    free(p);


    return 0;
}