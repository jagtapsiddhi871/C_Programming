#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("The number is Positive \n");
    }
    else if(num < 0)
    {
        printf("The number is Negative \n");
    }
    else
    {
        printf("The number is Zero.\n");
    }

}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}