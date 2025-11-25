#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char CValue = 'A';

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t",CValue);
        CValue++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}