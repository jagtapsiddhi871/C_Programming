#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int frequencyCalculate(int Arr[],int iSize,int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;

}

int main()
{
    int iLength = 0 , iRet = 0,iValue = 0;
    int iCnt = 0;
    IPTR iPtr = NULL;
    
    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    iPtr = (IPTR )malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate memeory\n");
        return -1;
    }
    printf("Enter the values : \n");

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    printf("Enter the number to calculate frequency :\n");
    scanf("%d",&iValue);

    //Step 2 : Use the memory
    iRet = frequencyCalculate(iPtr,iLength,iValue);
    printf("Frequency of %d is : %d\n",iValue, iRet);

    //free the memory
    free(iPtr);

    return 0;
}