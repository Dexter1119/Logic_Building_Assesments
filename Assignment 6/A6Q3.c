////////////////////////////////////////////////////////////////////
//
// Name:        A6Q3.c
// Description: Program which print the number into word.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
int Fact(int iNo)       //Time Complexity = O(N)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    unsigned long iFact = 1;
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);
    unsigned long iRet = Fact(iValue);
    printf("The Fatctorial of %d is %d",iValue,iRet);
    return 0;
}