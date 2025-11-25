// Input : 8
//Output : 2 4 6 8 10 12 14 16
 //        1 2  3 4 5 6  7  8 

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 2; iCnt <= iNo*2; iCnt++)
    {
        if((iCnt % 2)== 0)
        {
            printf("%d\t",iCnt);
        }
       
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number of elements");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}