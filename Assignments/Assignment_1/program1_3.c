#include<stdio.h>

void Display()
{
    int i = 0;

    int iCnt = 5;
    while(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
}
int main()
{
    Display();

    return 0;
}