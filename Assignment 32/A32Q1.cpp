////////////////////////////////////////////////////////////////
//
// File :        A32Q1.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////

/*
    which accept one number and position from user and
    check whether bit at that position is on or off. If bit is one return TURE
    otherwise return FALSE

    Input : 10 2
    Output : TRUE
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo , int iPos)
{
    if(iPos > 32 || iPos < 0)
    {
        return false;
    }
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = 1;
    iMask = iMask << (iPos-1);

    iResult = iNo & iMask;

    return(iResult == iMask);


}

int main()
{
    UINT iValue = 0;
    int iLocation = 0;
    bool bRet = false;
    cout<<"Enter the number :";
    cin>>iValue;

    cout<<"Enter the location that you wanna check:";
    cin>>iLocation;

    bRet = CheckBit(iValue,iLocation);
    if(bRet == true)
    {
        cout<<iLocation<<"th bit is on";
    }
    else
    {
        cout<<iLocation<<" th bit is off";
    }

    
    return 0;
}