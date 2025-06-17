////////////////////////////////////////////////////////////////
//
// File :        A32Q3.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////

/*
    program which accept one number and position from user and on that bit. Return modified number.
    Input : 10 3
    Output : 14

*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;
int OffBit(UINT iNo , int iPos)
{
    if(iPos > 32 || iPos < 0)
    {
        return -1;
    }
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = 1;
    iMask = iMask << (iPos-1);
    

    iResult = iNo | iMask;

    return iResult;


}

int main()
{
    UINT iValue = 0;
    int iLocation = 0;
    UINT iRet = 0;

    cout<<"Enter the number :";
    cin>>iValue;

    cout<<"Enter the location that you wanna check:";
    cin>>iLocation;

    iRet = OffBit(iValue,iLocation);
    if(iRet == -1)
    {
        cout<<"please enter the valid position";
        return -1;
    }
    cout<<"After turning on "<<iLocation<<"th bit the number is:"<<iRet<<endl;
    
    return 0;
}