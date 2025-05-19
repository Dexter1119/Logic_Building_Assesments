///////////////////////////////////////////////////////////////////
// 
// Name:        A8Q5.c
// Description: Program which Convert Square Feet to Square Meter.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        19/05/25
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dRet = 0.0;
    dRet = iValue / 10.7639;
    return dRet;
}
int main()
{
    int iValue = 0;

    printf("Enter the Square Feet :");
    scanf("%d",&iValue);

    double dRet = 0.0;
    dRet = SquareMeter(iValue);
    printf("The Conversion of Square Feet to Square Meter is %lf Sq.m",dRet);

    return 0;
}