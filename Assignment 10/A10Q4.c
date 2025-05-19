///////////////////////////////////////////////////////////////////
// 
// Name:        A10Q4.c
// Description: Problems on numbers-->Multiply All digits.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        19/05/25
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>


int MultDigits(int iNo)
{
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit - 0 != 0) //if digit is 0
        {
           iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue); 

    int iRet = 0;
    iRet = MultDigits(iValue); 
    printf("The Multiplication of digits are : %d\n",iRet); 

    return 0; 
}