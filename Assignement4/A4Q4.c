////////////////////////////////////////////////////////////////////
//
// Name:        A4Q4.c
// Description: Program Which Display Sum of Non Factors of Number
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
/////////////////////////////////////////////////////////////////////


#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1 ; iCnt < iNo ; iCnt++)    //time complexity = O(N)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
    
    
}
 
int main()
{
   int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    int iRet = 0;
    iRet = SumNonFact(iValue);
    printf("The Summation of Non factors of the %d is %d",iValue,iRet);
    
    return 0;
}
