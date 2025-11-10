#include<stdio.h>
#include<stdbool.h>

bool is_divisible_by_five(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int iNumber;

    printf("Enter number : ");
    scanf("%d",&iNumber);

    printf("%s\n",is_divisible_by_five(iNumber) ? "Yes" : "No");

    return 0;
}