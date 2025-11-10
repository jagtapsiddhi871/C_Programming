#include<stdio.h>

void print_factors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iNumber;

    printf("Enter number :");
    scanf("%d",&iNumber);

    print_factors(iNumber);

    return 0;
}