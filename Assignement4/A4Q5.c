///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Name:        A4Q5.c
// Description: Program Which return difference between Sum of Non Factors and Factors of Number
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
///////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1 ; iCnt < iNo ; iCnt++)    //time complexity = O(N)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    iDiff = iSum1 - iSum2;
    return iDiff;
    
}
 
int main()
{
    int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    int iRet = 0;
    iRet = FactDiff(iValue);
    printf("The difference between Sum of Non Factors and Factors of %d is %d",iValue,iRet);
    
    return 0;
}
