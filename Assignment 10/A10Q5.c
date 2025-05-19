///////////////////////////////////////////////////////////////////
// 
// Name:        A10Q5.c
// Description: Problems on numbers-->Differentiate Even And Odd digits.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        19/05/25
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>


int CountDiff(unsigned long iNo)
{
    int iDigit = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSum1 += iDigit;
        }
        else
        {
            iSum2 += iDigit;
        }
        iNo = iNo / 10;
    }
    iDiff = iSum1 - iSum2;
    return iDiff;
}
int main()
{
    unsigned long iValue = 0;

    printf("Enter the number : \n");
    scanf("%lu",&iValue); 

    int iRet = 0;
    iRet = CountDiff(iValue); 
    printf("The Difference between even and odd digits are : %d\n",iRet); 

    return 0; 
}