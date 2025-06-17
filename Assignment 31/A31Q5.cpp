////////////////////////////////////////////////////////////////
//
// File :        A31Q5.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////

/*
    accept one number from user and on its first 4 bits.
    Input : 73
    Output : 79
*/

#include<iostream>
using namespace std;

int OnBit(int iNo)
{
    int iMask = 0X0000000f;
    int iResult = 0;
   
    iResult = iNo | iMask;

    return iResult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"ENter the number:";
    cin>>iValue;

    iRet = OnBit(iValue);
    cout<<"Number after last 4 bit turn on is:"<<iRet<<endl;

    return 0;
}