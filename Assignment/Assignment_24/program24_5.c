///////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////
#include<stdio.h>                                      // For input output                        
#include<stdlib.h>                                     // For library function

///////////////////////////////////////////////////////
//
// Fuction Name : DigitsSum
// Description :  It is use to find summation of digits of each number
// Input       :  Integer
// Output      :  Integer
// Author      : Siddhi Balkrushna Jagtap
// Date        : 22/11/2025
//
////////////////////////////////////////////////////////

void DigitsSum(int Arr[],int iLength)
{
    int iCnt = 0, iNo = 0,iDigit = 0, iSum = 0;

    printf("Summation of digits of each number:\n");

    for(iCnt = 0; iCnt< iLength ; iCnt ++)
    {
       iNo = Arr[iCnt];
       iSum = 0;
       while(iNo != 0)
       {
        iDigit = iNo % 10;
        iSum = iSum +iDigit;
        iNo = iNo / 10;
       }  

       printf("%d : %d\n", Arr[iCnt], iSum);
    }   
    printf("\n");
    
}

///////////////////////////////////////////////////////
//
//       Entry Point Fuction 
//
////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the number of elements");
    scanf("%d",&iSize);

    p = (int*) malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p,iSize);

    free(p);

    return 0;
}