///////////////////////////////////////////////////////////////////
// 
// Name:        A7Q4
// Description: Program which Find Odd Factorial.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        18/05/25
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0; 
    int iFact = 1; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact *= iCnt;
        }
        else
        {
            continue;
        }
    }

    return iFact;
}
int main()
{
    int iValue = 0;

    printf("ENter the number :");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = OddFactorial(iValue);
    printf("odd factorial of %d number is %d",iValue,iRet);

    return 0;
}