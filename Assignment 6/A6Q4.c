////////////////////////////////////////////////////////////////////
//
// Name:        A6Q4.c
// Description: Program which print the table of N 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
/////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)           //Time Complexity = O(N);
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 10 ;iCnt++)
    {
        printf("%d\t",(iNo * iCnt));
    }
}


int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
