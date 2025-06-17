////////////////////////////////////////////////////////////////
//
// File :        A33Q4.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////


/*
    a program which accept one number , two positions from user andcheck whether bit at first or
    bit at second position is ON or OFF.

    Input : 10 3 7
    Output : TRUE

*/

#include<iostream>
using namespace std;


typedef unsigned int UINT;
bool CheckBit(UINT iNo , int iStart, int iEnd) 
{
    if((iStart > 32 || iStart < 0) || (iStart > 32 || iStart < 0))
    {
        return false;
    }
    UINT iMask1 = 0;
    UINT iMask2 = 0;
    UINT iResult = 0;

    iMask1 = 80000000;
    iMask1 = iMask1 >>( 32-iStart+1);

    iMask2 = 80000000;;
    iMask2 = iMask2 >>( 32 -iEnd+1);

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
    UINT iValue = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    bool bREt = false;
    
    cout<<"ENter the element:";
    cin>>iValue;

    cout<<"ENter the start:";
    cin>>iValue1;

    cout<<"ENter the end:";
    cin>>iValue2;


    bREt = CheckBit(iValue,iValue1,iValue2);
    if(bREt == true)
    {
        cout<<"The "<<iValue1<<"th or "<<iValue2<<"th bit is on";
    }
    else
    {
        cout<<"The "<<iValue1<<"th and "<<iValue2<<"th bit is off";
    }

    return 0;
}