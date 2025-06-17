////////////////////////////////////////////////////////////////
//
// File :        A31Q3.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////

/*
    accept one number from user and toggle 7th bit of That Number

    Input : 137
    Output : 201

*/

#include<iostream>
using namespace std;

int toggleBit(int iNo)
{
    int iMask = 0X00000040;
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
    cout<<"Number after 7th bit off is:"<<iRet<<endl;

    return 0;
}