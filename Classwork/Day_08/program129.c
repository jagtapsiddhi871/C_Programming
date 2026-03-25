#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iEven = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((iEven % 2)== 0)
        {
            iEven = iEven + Arr[iCnt];
        }
       
    } 
    return iEven;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter number of elements :");
    scanf("%d\n",&iLength);

    ptr = (int*)malloc(iLength * sizeof(int));
    if(NULL == ptr)                     // Industrial way of coding
    {
        printf("Unable to allocate to memory\n");
        return -1;
    }

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = CountEven(ptr,iLength);

    printf("Number of even elements are : %d\n",iRet);

    free(ptr);

    return 0;
}
