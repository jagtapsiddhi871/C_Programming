#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your Exam at 7 AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your Exam at 8.30 AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your Exam at 9.20 AM");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your Exam at 10.30 AM");
    }
    else
    {
        printf("Invalid Division");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}