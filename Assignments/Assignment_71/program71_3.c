#include<stdio.h>

int Small(char *str)
{
   static int iCount = 0;

   if(*str != '\0')
   {
      if(*str >= 'a' && *str <= 'z')
      {
        iCount++;
      }
      str++;
      Small(str);
   }
   return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^\n]", arr);

    iRet = Small(arr);

    printf("%d",iRet);

    return 0;
}
