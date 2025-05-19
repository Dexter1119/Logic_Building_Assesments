//////////////////////////////////////////////////////////////////////////////////
//
// Name:        A6Q5.c
// Description: Program which print the table of N in its table in reverse order
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
//////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)           //Time Complexity = O(N);
{
    int iCnt = 0;
    for(iCnt = 10; iCnt >= 1 ;iCnt--)
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
