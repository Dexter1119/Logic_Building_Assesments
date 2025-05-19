///////////////////////////////////////////////////////////////////
//
// Name:        A5Q2.c
// Description: Program Which Print Numbers from 1 to N 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo;iCnt++) //Time Complexity = O(N)
    {
        printf("%d\t",iCnt);
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