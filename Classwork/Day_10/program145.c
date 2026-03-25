#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

int Maximun(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;            

    iMax = Arr[0];               //Important

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;


}

int main()
{
    int iLength = 0,iRet = 0;

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

    //Step 2 : Use the memory
    iRet = Maximun(iPtr,iLength);
    
    printf("Maximum number is : %d\n",iRet);
    
    //free the memory
    free(iPtr);

    return 0;
}