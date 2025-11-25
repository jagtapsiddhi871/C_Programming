////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////

#include<stdio.h>                                        // For Input output
#include<stdlib.h>                                       // For library function

////////////////////////////////////////////////////////
//
// Fuction Name : Frequency 
// Description : It is use to check how many numbers are 11 
// Input       :  Integer
// Output      :  Integer
// Author      : Siddhi Balkrushna Jagtap
// Date        : 22/11/2025
//
////////////////////////////////////////////////////////

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;
   

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("%d",iRet);

    free(p);


    return 0;
}