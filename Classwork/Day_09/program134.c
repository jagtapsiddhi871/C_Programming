#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int main()
{
    int iLength = 0;
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
    //Call to the function which contains bussiness logic
    //Fun(iPtr,iLength)

    //free the memory
    free(iPtr);

    return 0;
}