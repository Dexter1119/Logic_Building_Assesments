////////////////////////////////////////////////////////////////
//
// File :        A30Q2.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////


/*
    5th & 18th bit is On or OFF.
*/

#include<iostream>
using namespace std;


typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 0x00020010;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    UINT iValue = 0;
    bool bREt = false;

    cout<<"Enter the Number:";
    cin>>iValue;

    bREt = CheckBit(iValue);
    if(bREt == true)
    {
        cout<<" 5th & 18th bit is On"<<endl;  
    }
    else
    {
        cout<<" 5th & 18th bit is Off"<<endl;     
    }

    return 0;
}