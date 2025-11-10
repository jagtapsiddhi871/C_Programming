#include<stdio.h>

void CheckLeapYear(int year)
{
    if((year % 4) == 0)
    {
        printf("It is leap year");
    }
    else
    {
        printf("It is not leap year");
    }
}

int main()
{
    int yr;

    printf("Enter year : ");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0;
}