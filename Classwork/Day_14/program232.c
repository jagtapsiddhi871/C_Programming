#include<stdio.h>

void CountDgits(char str[])
{
    int iCount = 0; 
    
    while(*str != '\0')
    {
        if((*str >= 48) && (*str <= 57))
        {
          iCount++;
        }
        str++;
    }
    printf("Number of digits  are :%d\n",iCount);
   
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountDgits(Arr);

    return 0;
}