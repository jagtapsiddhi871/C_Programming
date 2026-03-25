#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
       
    } 
    return ((float)iSum / (float)iSize);      
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0, fRet = 0.0f;

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

    fRet = Average(ptr,iLength);

    printf("Average is : %d\n",fRet);

    free(ptr);

    return 0;
}
