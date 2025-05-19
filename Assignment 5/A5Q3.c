///////////////////////////////////////////////////////////////////
//
// Name:        A5Q3.c
// Description: Program Which Print Numbers from -N to N 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = -iNo; iCnt <= +iNo; iCnt++) //Time Complexity = O(2N)~O(N)
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