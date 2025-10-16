/*
  Step1: Understand the problem statement
  Step2: Write the algorithm
  Step3: Decide the programming language
  Step4: Write the program
  Step5: Test the program
*/

/*
   Algorithm

   START
        Accept first number as no1
        Accept second number as no2
        Perform Addition of no1 & no2
        Display the Addition on sreeen
   STOP
*/

#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2;                //Business Logic
    return fSum;
}

int main()
{
    int fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);
    
    printf("Addition is : %f\n",fRet);

    return 0;
}