///////////////////////////////////////////////////////////////////
// 
// Name:        A7Q2
// Description: Program which Convert $ to INR.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        18/05/25
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
 
int DollarToINR(int iNo)
{
    int Doller = 0;
    Doller = iNo * 70;
    return Doller;
}
int main()
{
    int iValue = 0;

    printf("ENter the number :");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = DollarToINR(iValue);
    printf("The amount Coverted into Doller is %d $ ",iRet);
    return 0;
}