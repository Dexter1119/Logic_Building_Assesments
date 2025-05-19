///////////////////////////////////////////////////////////////////
// 
// Name:        A8Q2.c
// Description: Program which Find Area of Rectangle.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        18/05/25
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    if( fWidth < 0) 
    {
        fWidth = -fWidth;
    }
    if( fHeight< 0) 
    {
        fHeight = -fHeight;
    }
    double dArea = 0.0; 
    dArea = (double)fHeight * (double)fWidth;
    return dArea;
}
int main()
{
    float fValue1 = 0.0f;;

    printf("Enter the Width :");
    scanf("%f",&fValue1);

    float fValue2 = 0.0f;;

    printf("Enter the Height :");
    scanf("%f",&fValue2);

    double dRet = 0;
    dRet = RectArea(fValue1,fValue2);
    printf("The Area Of Rectangle is: %.3lf",dRet);

    return 0;
} 