////////////////////////////////////////////////////////////////////
//
// Name:        A4Q3.c
// Description: Program Which Display Non Factors of Number
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
/////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayNonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1 ; iCnt < iNo ; iCnt++)    //time complexity = O(N)
    {
        if((iNo % iCnt) != 0)
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
    DisplayNonFact(iValue);
    
    return 0;
}

//time complexity = O(N)