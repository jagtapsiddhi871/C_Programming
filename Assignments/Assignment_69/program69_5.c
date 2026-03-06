#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'a';

    if(ch <= 'f')
    {
        printf("%c\t",ch);
        ch = ch + 1;
        Display(iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}