////////////////////////////////////////////////////////////////
//
// Name:        A4Q1.c
// Description: Program Which Return Multiplacation of Factors
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
////////////////////////////////////////////////////////////////


#include <stdio.h>

int MultFact(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iMult = 1;
    for(iCnt = 1 ; (iCnt <= iNo / 2) ; iCnt++)  //time complexity = O(N/2)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
        else
        {
            continue;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    int iRet = 0;
    iRet = MultFact(iValue);
    printf("The multiplication of factors of the %d is %d",iValue,iRet);
    return 0;
}

