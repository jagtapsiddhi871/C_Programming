#include<stdio.h>

void CheckEvenOdd(int num)
{
    int iCnt = 0;

    if((num % 2) == 0)
    {
        printf("It is even number");
    }
    else
    {
        printf("It is odd number");
    }

}

int main()
{
    int number = 0;

    printf("Enter number : \n");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}

