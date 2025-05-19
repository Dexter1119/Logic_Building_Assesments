///////////////////////////////////////////////////////////////////
// 
// Name:        A7Q5
// Description: Program which Find Odd Factorial.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        18/05/25
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0; 
    int iFact1 = 1; 
    int iFact2 = 1; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact1 *= iCnt;
        }
        else
        {
            iFact2 *= iCnt;
        }
    }
    int iDiff = 0;
    iDiff = iFact1 - iFact2;
    return iDiff;
}
int main()
{
    int iValue = 0;

    printf("ENter the number :");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = FactorialDiff(iValue);
    printf("Difference between odd factorial And Even Factorial is of %d number is %d",iValue,iRet);

    return 0;
}