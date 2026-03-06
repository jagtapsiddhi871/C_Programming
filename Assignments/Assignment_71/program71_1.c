#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;

        WhiteSpace(str);
    }
    return iCount;
    
}
int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String :");
    fgets(arr, sizeof(arr), stdin);

    iRet = WhiteSpace(arr);

    printf("%d",iRet);

    return 0;
}