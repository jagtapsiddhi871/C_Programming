////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////
#include<stdio.h>                                        // For input output
#include<stdbool.h>                                      // For bool datatype
#include<stdlib.h>                                       // For library function

////////////////////////////////////////////////////////
//
// Fuction Name :  Check
// Description : It is use to check the number is 11 or not
// Input       :  Integer
// Output      :  Integer
// Author      : Siddhi Balkrushna Jagtap
// Date        : 22/11/2025
//
////////////////////////////////////////////////////////

bool Check(int Arr[],int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
    
    }
    return false;
}
////////////////////////////////////////////////////////
//
//       Entry Point Fuction 
//
////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iCnt = 0;
    int *p = NULL;
    bool bRet = false;

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

    bRet = Check(p,iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);


    return 0;
}