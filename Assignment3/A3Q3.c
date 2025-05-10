
///////////////////////////////////////////////////////////////////////////
// 
// Name:        A3Q3.c
// Description: Program to print even factors
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 3 Question 3
// Date:        09-05-25
// 
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void DisplayFactor(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(((iNo % iCnt) == 0) && (iCnt % 2 == 0))
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("ENter the number ");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}
