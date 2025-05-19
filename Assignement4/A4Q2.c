////////////////////////////////////////////////////////////////////
//
// Name:        A4Q2.c
// Description: Program Which Display of Factors in Desending order
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
/////////////////////////////////////////////////////////////////////


#include<stdio.h>

int* DisplayFact(int iNo)
{
    int iCnt = 0;
    int Arr[iNo/2];
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for ((iCnt = iNo /  2) ; iCnt >= 1 ; iCnt--)    ////time complexity = O(N/2)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
 
int main()
{
    int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    DisplayFact(iValue);
    
    return 0;
}

