///////////////////////////////////////////////////////////////////
// 
// Name:        A10Q3.c
// Description: Problems on numbers-->count No. between 3 and 7.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        19/05/25
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>


int CountRange(int iNo)
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
        if(iDigit > 3 && iDigit < 7)
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
    iRet = CountRange(iValue); 
    printf("Number of digits between 3 and 7 are : %d\n",iRet); 

    return 0; 
}