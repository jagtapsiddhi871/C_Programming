////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////
#include<stdio.h>                                        // For input output
#include<stdlib.h>                                       // For library function

////////////////////////////////////////////////////////
//
// Fuction Name : Range
// Description : It is use to find the range between start and end number 
// Input       :  Integer
// Output      :  Integer
// Author      : Siddhi Balkrushna Jagtap
// Date        : 22/11/2025
//
////////////////////////////////////////////////////////

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iLength; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <=iEnd  )
        {
           printf("%d\n",Arr[iCnt]);
        }

    }
}
///////////////////////////////////////////////////////
//
//       Entry Point Fuction 
//
////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iCnt = 0,iValue1 = 0,iValue2 = 0;
    int *p = NULL;
    

    printf("Enter number of elements");
    scanf("%d",&iSize);

    printf("Enter the starting point");
    scanf("%d",&iValue1);

    printf("Enter the ending point");
    scanf("%d",&iValue2);

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

    Range(p,iSize,iValue1,iValue2);


    return 0;
}