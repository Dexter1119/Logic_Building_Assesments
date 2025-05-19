///////////////////////////////////////////////////////////////////
// 
// Name:        A9Q2.c
// Description: Problems on numbers--> Whether the number has zero.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        19/05/25
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    bool bAns = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if( iDigit - 0 == 0 )
        {
            bAns = true;
        }
        iNo = iNo / 10;
    }
    return bAns;
}
int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue); 

    bool bRet = false;
    bRet = ChkZero(iValue);
    if(bRet == false)
    {
        printf("The Number Doesnt Contains zero");
    }
    else
    {
        printf("The Number Does Contains zero");
    }   
    return 0;
}