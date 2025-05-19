///////////////////////////////////////////////////////////////////
// 
// Name:        A7Q1
// Description: Program which displays pattern.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        18/05/25
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
 
void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++){
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++){
        printf("#\t");
    }
}
int main()
{
    int iValue = 0;

    printf("ENter the number :");
    scanf("%d",&iValue);

    Display(iValue);
    //return 0;
}