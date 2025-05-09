//////////////////////////////////////////////////////////////
// 
// Name:        A1Q2.c
// Description: Program to print n number of * on screen
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 2 Question 2
// Date:        09-05-25
// 
////////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    iCnt = iNo;
    
    while( iCnt > 0 )
    {
        printf(" *\n ");
        iCnt-- ;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d" ,&iValue);
    Display(iValue);
    return 0;
}