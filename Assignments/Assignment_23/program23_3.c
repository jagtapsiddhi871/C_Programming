////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////
#include<stdio.h>                                         //For Input Output
#include<stdlib.h>                                        // For library function
#include<stdbool.h>                                       // For bool datatype                               

////////////////////////////////////////////////////////
//
// Fuction Name : LastOcc
// Description : It is use to find last occurence of a number
// Input       :  Integer
// Output      :  Integer
// Author      : Siddhi Balkrushna Jagtap
// Date        : 22/11/2025
//
////////////////////////////////////////////////////////

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength; iCnt > 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    
    }
    return -1;

}
////////////////////////////////////////////////////////
//
//       Entry Point Fuction 
//
////////////////////////////////////////////////////////



int main()
{
    int iSize = 0,iCnt = 0, iRet = 0,iValue = 0;
    int *p = NULL;
    

    printf("Enter number of elements");
    scanf("%d",&iSize);

    printf("Enter the number");
    scanf("%d",&iValue);

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

    iRet = LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurence of number is %d",iRet);
    }
    
    free(p);


    return 0;
}