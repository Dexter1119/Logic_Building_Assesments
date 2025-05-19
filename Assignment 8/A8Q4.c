///////////////////////////////////////////////////////////////////
// 
// Name:        A8Q4.c
// Description: Program which Find Convert Fahrenheit To Degree.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        18/05/25
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dTemp = 0.0;
    dTemp = (((double)fTemp - 32.0) * (5.0 / 9.0));
    return dTemp;
}

int main()
{
    float fValue = 0.0f;

    printf("Enter the Temperature in Fahrenheit :");
    scanf("%f",&fValue);

    double dRet = 0.0;
    dRet = FhtoCs(fValue);
    printf("Temperature in Degree is : %.3lf ",dRet);

    return 0;
}