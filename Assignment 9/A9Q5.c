///////////////////////////////////////////////////////////////////
// 
// Name:        A9Q3.c
// Description: Problems on numbers--> Count Frequency Of 4.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        19/05/25
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int Count(int iNo)
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
        if( iDigit < 6 )
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
    iRet = Count(iValue);
    printf("The Frequency of digits less than 6 is:%d",iRet);
    return 0;
}