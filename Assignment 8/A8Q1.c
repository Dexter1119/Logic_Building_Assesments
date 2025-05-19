///////////////////////////////////////////////////////////////////
// 
// Name:        A8Q1.c
// Description: Program which Find Area.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        18/05/25
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>
#define PI 3.14
double CircleArea(float fRadius )
{
    if( fRadius < 0)
    {
        fRadius = -fRadius;
    }
    double dArea = 0.0; 
    dArea = (double)PI * ((double)fRadius * (double)fRadius);
    return dArea;
}
int main()
{
    float fValue = 0.0f;;

    printf("Enter the Radius :");
    scanf("%f",&fValue);

    double dRet = 0;
    dRet = CircleArea(fValue);
    printf("The Area Of Circle is: %.3lf",dRet);

    return 0;
}