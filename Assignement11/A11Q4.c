///////////////////////////////////////////////////////////////////
// 
// Name:        A11Q4.c
// Description: Problems on Patern Printing. 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>


void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }
}

int main()
{

    int iValue = 0;
    printf("ENter the number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);


    return 0;
}