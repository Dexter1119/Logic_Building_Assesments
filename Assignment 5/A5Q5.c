////////////////////////////////////////////////////////////////////
//
// Name:        A5Q5.c
// Description: Program Which print first 5 multiples of N.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)    //Time Complexity = O(5)~O(N)
    {
        printf("%d \t",(iNo * iCnt));
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return 0;
}