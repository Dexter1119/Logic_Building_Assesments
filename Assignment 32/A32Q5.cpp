////////////////////////////////////////////////////////////////
//
// File :        A32Q5.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////

/*
    program which accept one number from user and toggle contents
    of first and last nibble of the number. Return modified number.
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;
int ToggleBit(UINT iNo)
{
    
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = 0Xf000000f;

    iResult = iNo ^ iMask;

    return iResult;


}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter the number :";
    cin>>iValue;


    iRet = ToggleBit(iValue);
    if(iRet == -1)
    {
        cout<<"please enter the valid position";
        return -1;
    }
    cout<<"After toggled 1st and last nibble the number is:"<<iRet<<endl;
    
    return 0;
}