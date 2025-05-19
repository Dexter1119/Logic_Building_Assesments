///////////////////////////////////////////////////////////////////
// 
// Name:        A8Q3.c
// Description: Program which Convert Metre to Km.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        18/05/25
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>

double KMtoMeter(int iNo)
{
    if( iNo < 0)
    {
       iNo = -iNo;
    }
    double dAns = 0.0; 
    dAns = iNo * 1000;
    return dAns;
}
int main()
{
    int iValue = 0;

    printf("Enter the Value in KMs :");
    scanf("%d",&iValue);

    double dRet = 0.0;
    dRet = KMtoMeter(iValue);
    printf("The Conversion of km to metre is %.2lf m",dRet);

    return 0;
}