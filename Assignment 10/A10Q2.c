///////////////////////////////////////////////////////////////////
// 
// Name:        A10Q2.c
// Description: Problems on numbers-->count of Odd digits.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        19/05/25
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>


int CountOdd(int iNo)
{
    int iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iAns++;
        }
        iNo = iNo / 10;
    }
    return iAns;
}
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue); 

    int iRet = 0;
    iRet = CountOdd(iValue); 
    printf("Number of Odd digits are : %d\n",iRet); 

    return 0; 
}