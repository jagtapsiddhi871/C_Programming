#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

void Update(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        Arr[iCnt]++;
    }
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
    Update(iPtr,iLength);
    
    printf("Updated data from array is : ");

    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        printf("%d\n",iPtr[iCnt]);
    }
    
    //free the memory
    free(iPtr);

    return 0;
}