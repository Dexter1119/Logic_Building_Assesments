////////////////////////////////////////////////////////////////
//
// File :        A31Q2.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////

/*
    off 7th and 10th bit of that number.

    Input : 577
    Output : 1
    
*/


#include<iostream>
using namespace std;

int OffBit(int iNo)
{
    int iMask = 0X00000240;
    int iResult = 0;
   
    iMask = ~iMask;
    
    iResult = iNo & iMask;

    return iResult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"ENter the number:";
    cin>>iValue;

    iRet =OffBit(iValue);
    cout<<"Number after off 7th and 10th bit is:"<<iRet<<endl;

    return 0;
}