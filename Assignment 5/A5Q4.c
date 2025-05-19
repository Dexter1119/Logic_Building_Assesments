///////////////////////////////////////////////////////////////////
//
// Name:        A5Q4.c
// Description: Program Which Print odd Numbers from 1 to N 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
/////////////////////////////////////////////////////////////////////


#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<= iNo; iCnt= iCnt + 2)   //Time Complexity = O(N/2)~O(N)
    {
        printf("%d \t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);
    OddDisplay(iValue);
    return 0;
}