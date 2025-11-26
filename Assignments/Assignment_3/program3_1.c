#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;    // Function exist
    }

    int iCnt = 1;
    int iEven = 2; 

    printf("The first %d even numbers are:\n", iNo);

    while(iCnt <= iNo)
    {
        printf("%d\t", iEven); 
        
        iEven = iEven + 2; 
        iCnt++;
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}



