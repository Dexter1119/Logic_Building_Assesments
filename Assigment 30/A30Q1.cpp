////////////////////////////////////////////////////////////////
//
// File :        A30Q1.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////


/*
    checks whether 15th bit is On or OFF.
*/

#include<iostream>
using namespace std;


typedef unsigned int UINT
bool CheckBit(UINT iNo)
{
    UINT iMask = 0x00004000;
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
        cout<<"The 15th bit is on"<<endl;  
    }
    else
    {
        cout<<"The 15th bit is off"<<endl;     
    }

    return 0;
}