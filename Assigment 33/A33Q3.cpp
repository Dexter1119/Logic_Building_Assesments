////////////////////////////////////////////////////////////////
//
// File :        A33Q3.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////


/*
    program which accept one number from user and check whether 9th or 12th bit is on or off.

    Input : 257
    Output : TRUE

*/

#include<iostream>
using namespace std;

bool CheckBit(int iNo) 
{
    int iMask1 = 0x00000100;
    int iMask2 = 0x00000800;
    int iResult = 0;


    iResult = iNo & iMask1;
    if(iResult == iMask1 )
    {
        return true;
    }
    else
    {
        iResult = iNo & iMask2;
        return (iResult == iMask2);
    }   
}

int main()
{
    int iValue = 0;
    bool bREt = false;
    
    cout<<"ENter the element:";
    cin>>iValue;

    bREt = CheckBit(iValue);
    if(bREt == true)
    {
        cout<<"The 9th or 12th bit is on";
    }
    else
    {
        cout<<"The 9th and 12th bit is off";
    }

    return 0;
}