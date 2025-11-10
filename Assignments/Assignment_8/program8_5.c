#include<stdio.h>

void TableRev(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iMultiple = 0;

    for(iCnt = 10;iCnt >= 1;iCnt--)
    {
        iMultiple = iNo * iCnt;

        printf("%d ", iMultiple);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}