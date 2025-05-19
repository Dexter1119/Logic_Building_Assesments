///////////////////////////////////////////////////////////////////
//
// Name:        A5Q1.c
// Description: Program Which Print $ & * for N times
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
/////////////////////////////////////////////////////////////////////

#include <stdio.h>


void Pattern(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++) //Time Complexity = O(N)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}