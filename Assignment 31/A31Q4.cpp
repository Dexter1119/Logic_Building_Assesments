////////////////////////////////////////////////////////////////
//
// File :        A31Q4.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////

/*
    accept one number from user and toggle 7th and 10th bit of That Number

    Input : 137
    Output : 713
*/

#include<iostream>
using namespace std;

int toggleBit(int iNo)
{
    int iMask = 0X000000240;
    int iResult = 0;
   
    iResult = iNo ^ iMask;

    return iResult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"ENter the number:";
    cin>>iValue;

    iRet = toggleBit(iValue);
    cout<<"Number after toggle 7th and 10th bit is:"<<iRet<<endl;

    return 0;
}